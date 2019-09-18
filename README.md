# ESP32 firmware starter

This is template project of ESP32 firmware development by using ESP-IDF.

## Build environment

- Ubuntu 19.04 (tested)
- ESP-IDF latest version (master)

## Features

- Pre-config build tasks, recommended VSCode plugins of ESP firmware development
- Config build system with CMake
- Get started with simple task on FreeRTOS which is extendable later

## How to use project

- Step 1: Make sure you already [setup prerequisites environment](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/index.html)

- Step 2: Clone or folk project

- Step 3: Build project

  ```Shell
    $idf.py build
  ```

  or `Ctrl+Shift+P` then choose `build` task in VSCode Tasks

- Step 4: Flash project

  ```Shell
    $idf.py -p (PORT) flash
  ```

  or `Ctrl+Shift+P` then choose `flash` task in VSCode Tasks

- Step 5: Monitor project

  ```Shell
    $idf.py -p (PORT) monitor
  ```

  or `Ctrl+Shift+P` then choose `monitor` task in VSCode Tasks

- Step 6: Modify project fits to your requirements

## ESP-IDF Documentation

For more ESP development details, please read [ESP-IDF documentation](https://docs.espressif.com/projects/esp-idf/en/latest/index.html)
