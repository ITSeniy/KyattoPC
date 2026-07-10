cmake_minimum_required(VERSION 3.20)
project(TeyandeeRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# ---- Nestopia Oracle (optional) ----
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" OFF)
set(NESTOPIA_DIR "${CMAKE_SOURCE_DIR}/nestopia-core")

# ---- nesrecomp pin check ----
# When nesrecomp is a plain directory (zip extract / local junction without .git),
# the pin check is skipped with a warning so local bring-up still works.
if(EXISTS "${CMAKE_SOURCE_DIR}/nesrecomp.pin" AND EXISTS "${NESRECOMP_ROOT}/.git")
    file(STRINGS "${CMAKE_SOURCE_DIR}/nesrecomp.pin" _PIN_LINES)
    set(NESRECOMP_PIN_BRANCH "")
    set(NESRECOMP_PIN_SHA "")
    foreach(_line IN LISTS _PIN_LINES)
        if(_line MATCHES "^[ \t]*#")
            # comment
        elseif(_line MATCHES "^[ \t]*branch[ \t]*=[ \t]*(.*)$")
            string(STRIP "${CMAKE_MATCH_1}" NESRECOMP_PIN_BRANCH)
        elseif(_line MATCHES "^[ \t]*sha[ \t]*=[ \t]*(.*)$")
            string(STRIP "${CMAKE_MATCH_1}" NESRECOMP_PIN_SHA)
        endif()
    endforeach()

    if(NESRECOMP_PIN_SHA)
        set(NESRECOMP_EXPECTED_SHA "${NESRECOMP_PIN_SHA}")
        set(NESRECOMP_PIN_SOURCE "explicit sha in nesrecomp.pin")
    else()
        if(NOT NESRECOMP_PIN_BRANCH)
            set(NESRECOMP_PIN_BRANCH "origin/master")
        endif()
        execute_process(
            COMMAND git -C "${NESRECOMP_ROOT}" rev-parse "${NESRECOMP_PIN_BRANCH}"
            OUTPUT_VARIABLE NESRECOMP_EXPECTED_SHA
            OUTPUT_STRIP_TRAILING_WHITESPACE
            RESULT_VARIABLE _NESRECOMP_RP_RC
        )
        if(NOT _NESRECOMP_RP_RC EQUAL 0)
            message(FATAL_ERROR
                "nesrecomp pin: failed to resolve branch '${NESRECOMP_PIN_BRANCH}' "
                "in ${NESRECOMP_ROOT}. Is the ref fetched?")
        endif()
        set(NESRECOMP_PIN_SOURCE "tip of ${NESRECOMP_PIN_BRANCH}")
    endif()

    execute_process(
        COMMAND git -C "${NESRECOMP_ROOT}" rev-parse HEAD
        OUTPUT_VARIABLE NESRECOMP_ACTUAL_SHA
        OUTPUT_STRIP_TRAILING_WHITESPACE
        RESULT_VARIABLE _NESRECOMP_HEAD_RC
    )
    if(NOT _NESRECOMP_HEAD_RC EQUAL 0)
        message(FATAL_ERROR
            "nesrecomp pin check: failed to read HEAD of ${NESRECOMP_ROOT}.")
    endif()

    if(NOT NESRECOMP_ACTUAL_SHA STREQUAL NESRECOMP_EXPECTED_SHA)
        message(FATAL_ERROR
            "nesrecomp pin mismatch.\n"
            "  expected: ${NESRECOMP_EXPECTED_SHA}  (from ${NESRECOMP_PIN_SOURCE})\n"
            "  actual:   ${NESRECOMP_ACTUAL_SHA}  (HEAD of ${NESRECOMP_ROOT})\n"
            "\n"
            "Align with: git -C ${NESRECOMP_ROOT} checkout ${NESRECOMP_EXPECTED_SHA}\n"
            "Or update sha= in ${CMAKE_SOURCE_DIR}/nesrecomp.pin")
    endif()
    message(STATUS "nesrecomp pin OK: ${NESRECOMP_EXPECTED_SHA} (${NESRECOMP_PIN_SOURCE})")
elseif(EXISTS "${CMAKE_SOURCE_DIR}/nesrecomp.pin")
    message(STATUS "nesrecomp pin: skipped (no .git under ${NESRECOMP_ROOT})")
endif()

if(NOT EXISTS "${NESRECOMP_ROOT}/runner/runner.cmake")
    message(FATAL_ERROR
        "nesrecomp not found at ${NESRECOMP_ROOT}.\n"
        "Run setup.bat (Windows) or setup.sh (Linux/macOS) first.")
endif()

include(${NESRECOMP_ROOT}/runner/runner.cmake)

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

# ---- Main executable ----
add_executable(TeyandeeRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    override_text.c
    ${NESRECOMP_RUNNER_ROOT}/src/override_chr.c
    ${NESRECOMP_RUNNER_ROOT}/src/chr_codec.c
    generated/teyandee_full.c
    generated/teyandee_dispatch.c
)

target_compile_definitions(TeyandeeRecomp PRIVATE RECOMP_STACK_TRACKING)

target_include_directories(TeyandeeRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${NESRECOMP_RUNNER_ROOT}/src
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(TeyandeeRecomp PRIVATE ${SDL2_LIBRARIES})

if(WIN32)
    target_link_libraries(TeyandeeRecomp PRIVATE ws2_32)
endif()

if(ENABLE_NESTOPIA_ORACLE AND EXISTS "${NESTOPIA_DIR}")
    target_link_libraries(TeyandeeRecomp PRIVATE nestopia_core)
    target_compile_definitions(TeyandeeRecomp PRIVATE ENABLE_NESTOPIA_ORACLE)
endif()

# ---- Post-build: ship SDL2 + locale JSON next to the exe ----
if(WIN32)
    add_custom_command(TARGET TeyandeeRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${NESRECOMP_ROOT}/runner/external/SDL2/lib/x64/SDL2.dll"
            "$<TARGET_FILE_DIR:TeyandeeRecomp>"
        COMMAND ${CMAKE_COMMAND} -E make_directory
            "$<TARGET_FILE_DIR:TeyandeeRecomp>/locales"
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            "${CMAKE_SOURCE_DIR}/locales"
            "$<TARGET_FILE_DIR:TeyandeeRecomp>/locales"
    )
endif()

if(MSVC)
    target_compile_options(TeyandeeRecomp PRIVATE /W3 /WX- /wd4102)
endif()

# ---- Pre-boot GUI launcher (RmlUi) — optional if lib present ----
if(EXISTS "${NESRECOMP_ROOT}/runner/launcher.cmake")
    include(${NESRECOMP_ROOT}/runner/launcher.cmake)
    nesrecomp_add_launcher(TeyandeeRecomp)
endif()
