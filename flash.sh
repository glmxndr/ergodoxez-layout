#!/usr/bin/env bash
KEYBOARD=ergodox_ez
KEYMAP=glmxndr
QMK_DIR=qmk_firmware

docker container run \
  --rm \
  --privileged \
  --volume $(pwd)/.build:/src/.build \
  --volume /dev/bus/usb:/dev/bus/usb \
  -w /src \
  glmxndr/qmk_teensy:1.0 \
  teensy_loader_cli -w -v -mmcu=atmega32u4 .build/ergodox_ez_glmxndr.hex

