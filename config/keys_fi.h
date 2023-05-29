/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Umlaut letters
#define FI_A_RING LEFT_BRACKET
#define FI_O_UMLAUT SEMICOLON
#define FI_A_UMLAUT APOSTROPHE

// US symbols
#define FI_EXCL LS(N1)               // Exclamation
#define FI_AT RA(N2)                 // At sign
#define FI_HASH LS(N3)               // Hash
#define FI_DLLR RA(N4)               // Dollar
#define FI_PRCNT LS(N5)              // Percent
#define FI_CARET LS(RIGHT_BRACKET)   // Caret (Dead)
#define FI_AMPS LS(N6)               // Ampersand
#define FI_STAR LS(BACKSLASH)        // Asterisk/Star
#define FI_LPAR LS(N8)               // Left parenthesis
#define FI_RPAR LS(N9)               // Right parenthesis
#define FI_EQUAL LS(N0)              // Equal
#define FI_PLUS MINUS                // Plus
#define FI_MINUS SLASH               // Minus
#define FI_UNDER QUESTION            // Underscore
#define FI_SLASH LS(7)               // Forward slash
#define FI_QMARK LS(MINUS)           // Question mark
#define FI_BSLH RA(MINU8S)           // Backslash
#define FI_PIPE RA(NON_US_BACKSLASH) // Pipe
#define FI_SEMI LS(COMMA)            // Semicolon
#define FI_COLON LS(PERIOD)          // Colon
#define FI_SQT BACKSLASH             // Single quote/Apostrophe
#define FI_DQT LS(N2)                // Double quote
#define FI_COMMA COMMA               // Comma
#define FI_LT NON_US_BACKSLASH       // Less than
#define FI_DOT PERIOD                // Period
#define FI_GT LS(NON_US_BACKSLASH)   // Greater than
#define FI_LBKT RA(N8)               // Left bracket
#define FI_LBRC RA(N7)               // Left brace
#define FI_RBKT RA(N9)               // Right bracket
#define FI_RBRC RA(N0)               // Right brace
#define FI_GRAVE LS(EQUAL)           // Grave accent (dead)
#define FI_TILDE RA(RIGHT_BRAKCET)   // Tilde (dead)

// Additional symbols
#define FI_POUND RA(N3)       // Pound
#define FI_EURO RA(E)         // Euro
#define FI_CURR LS(N4)        // Currency sign
#define FI_ACUTE PLUS         // Acute accent(dead)
#define FI_DIAC RIGHT_BRACKET // Umlaut (dead)