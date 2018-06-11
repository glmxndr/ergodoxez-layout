#!/usr/bin/env bash
KEYBOARD=ergodox_ez
KEYMAP=glmxndr
QMK_DIR=qmk_firmware

function runqmk() {
  docker container run \
    --rm \
    --env keybord=$KEYBOARD \
    --env keymap=$KEYMAP \
    --volume "$(pwd)":/qmk \
    edasque/qmk_firmware \
    $*
}

if [[ $1 == 'clean' ]]; then
    # 0. Clean
    runqmk make $KEYBOARD:$KEYMAP:clean
    rm -rf .build
    git clean -xfd
    git submodule foreach --recursive git clean -xfd
    git checkout -- .
else
    # 1. Copy my files into their appropriate locations inside QMK
    mkdir -p $QMK_DIR/keyboards/$KEYBOARD/keymaps/$KEYMAP
    cp -r $KEYMAP $QMK_DIR/keyboards/$KEYBOARD/keymaps/

    # 2. Make teensy build
    cd $QMK_DIR
    runqmk make $KEYBOARD:$KEYMAP

    # 3. make it accessible
    cp -r .build ../.build
fi

