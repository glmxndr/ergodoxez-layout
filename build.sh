#!/usr/bin/env bash
KEYBOARD=ergodox_ez
KEYMAP=glmxndr
QMK_DIR=qmk_firmware

function runqmk() {
  docker container run \
    --rm \
    --volume $(pwd)/glmxndr/:/usr/share/qmk_firmware/keyboards/ergodox_ez/keymaps/glmxndr \
    --volume $(pwd)/.build/:/usr/share/qmk_firmware/.build \
    glmxndr/qmk_teensy:1.0 \
    $*
}

if [[ $1 == 'clean' ]]; then
    runqmk make $KEYBOARD:$KEYMAP:clean
else
    runqmk make $KEYBOARD:$KEYMAP
fi

