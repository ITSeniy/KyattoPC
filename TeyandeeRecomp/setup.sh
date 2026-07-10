#!/usr/bin/env bash
set -euo pipefail

REPO="https://github.com/mstan/nesrecomp.git"
LOCAL_NESRECOMP="../nesrecomp-master"

if [ ! -e "nesrecomp" ]; then
    if [ -f "$LOCAL_NESRECOMP/runner/runner.cmake" ]; then
        echo "Linking local nesrecomp: $LOCAL_NESRECOMP"
        ln -s "$LOCAL_NESRECOMP" nesrecomp
    else
        echo "Cloning nesrecomp..."
        git clone --recurse-submodules "$REPO" nesrecomp
    fi
fi

SHA=$(sed -n 's/^[[:space:]]*sha[[:space:]]*=[[:space:]]*//p' nesrecomp.pin | tr -d '[:space:]' || true)
if [ -n "${SHA:-}" ] && [ -d "nesrecomp/.git" ]; then
    echo "Checking out pinned nesrecomp $SHA ..."
    git -C nesrecomp checkout "$SHA"
    git -C nesrecomp submodule update --init --recursive
fi

if [ ! -e "nestopia-core" ] && [ -d "nesrecomp/runner/nestopia-core" ]; then
    ln -s nesrecomp/runner/nestopia-core nestopia-core
    echo "Created symlink: nestopia-core -> nesrecomp/runner/nestopia-core"
fi

echo "Ready."
