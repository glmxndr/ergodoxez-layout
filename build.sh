#!/usr/bin/env bash
KEYBOARD=ergodox_ez
KEYMAP=glmxndr

function runqmk() {
  docker container run \
    --rm \
    --volume $(pwd)/${KEYMAP}/:/usr/share/qmk_firmware/keyboards/${KEYBOARD}/keymaps/${KEYMAP} \
    --volume $(pwd)/.build/:/usr/share/qmk_firmware/.build \
    glmxndr/qmk_teensy:1.0 \
    $*
}

if [[ $1 == 'clean' ]]; then
    runqmk make $KEYBOARD:$KEYMAP:clean
else
    runqmk make $KEYBOARD:$KEYMAP
fi

