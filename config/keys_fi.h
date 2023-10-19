/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
 
// This header redefines most symbol keys, which are prior defined by ZMK.
// Redefinitions are done to enable swedish/finnish keymap configuration.

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/* Accented letters | Å, Ö and Ä */
#define A_RNG (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))
#define O_UML (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))
#define A_UML (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* Section sign § and Half ½ */
#define SECT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define HALF (LS(SECT))

/* 1 | Exclamation mark ! */
#define EXCL (LS(N1))

/* 2 | Double quote " and At-sign @ */
#define DQT (LS(N2))
#define AT (RA(N2))

/* 3 | Hash # and Pound £ */
#define HASH (LS(N3))
#define POUND (RA(N3))

/* 4 | Currency sign ¤ and Dollar sign $ */
#define CURR (LS(N4))
#define DLLR (RA(N4))

/* 5 | Percent % */
#define PRCNT (LS(N5))

/* 6 | Ampersand & */
#define AMPS (LS(N6))

/* 7 | Forward slash / and Left brace { */
#define SLASH (LS(N7))
#define FSLH SLASH
#define LBRC (RA(N7))

/* 8 | Left parenthesis ( and Left bracket [ */
#define LPAR (LS(N8))
#define LBKT (RA(N8))

/* 9 | Right parenthesis ) and Right bracket ] */
#define RPAR (LS(N9))
#define RBKT (RA(N9))

/* 0 | Equal sign = and Right brace } */
#define EQUAL (LS(N0))
#define RBRC (RA(N0))

/* Plus +, Question mark ? and Backslash \ */
#define PLUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))
#define QMARK (LS(PLUS))
#define BSLH (RA(PLUS))

/* Acute ´, Grave ` and Cedilla ¸ (dead key) */
#define ACUTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))
#define GRAVE (LS(ACUTE))
#define CEDIL (RA(ACUTE))

/* Umlaut ¨, Caret ^ and Tilde ~ (dead key) */
#define UMLAU (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))
#define CARET (LS(UMLAU))
#define TILDE (RA(UMLAU))

/* Single quote/Apostrophe ' and Asterisk/Star * */
#define SQT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))
#define STAR (LS(SQT))

/* Less than <, Greater than > and Pipe | */
#define LT (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define GT (LS(LT))
#define PIPE (RA(LT))

/* Minus/Dash/Hyphen - and Underscore _ */
#define MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))
#define DASH MINUS
#define UNDER (LS(MINUS))

/* Semicolon ; */
#define SEMI (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))

/* Colon : */
#define COLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* Euro € */
#define EURO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))
