// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_TOUCH), MP_ROM_PTR(&pin_PA07) },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR_SWITCH), MP_ROM_PTR(&pin_PA28) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
