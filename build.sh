#!/usr/bin/env bash
KEYBOARD=ergodox_ez
KEYMAP=glmxndr
QMK_DIR=qmk_firmware

# 0. Clean
rm -rf .build

# 1. Copy my files into their appropriate locations inside QMK
mkdir -p $QMK_DIR/keyboards/$KEYBOARD/keymaps/$KEYMAP
cp -r $KEYMAP $QMK_DIR/keyboards/$KEYBOARD/keymaps/

# 2. Run string replacement to tweak EZ defaults (this is an alternative to
# copying the overrides dir)

# 3. Make clean
cd $QMK_DIR
make $KEYBOARD:$KEYMAP:clean

# 4. Make teensy build
make $KEYBOARD:$KEYMAP

# 5. Clean up
cp -r .build ../.build
git clean -f -d
git checkout -- .

