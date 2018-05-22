#!/usr/bin/env bash
KEYBOARD=ergodox_ez
KEYMAP=glmxndr
QMK_DIR=qmk_firmware

teensy_loader_cli -w -v -mmcu=atmega32u4 .build/ergodox_ez_glmxndr.hex
