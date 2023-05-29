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

// Accented letters
#define A_RNG LEFT_BRACKET // Å
#define O_UML SEMICOLON    // Ö
#define A_UML APOSTROPHE   // Ä

// Basic punctuation
#define F_COM COMMA  // , Comma
#define F_DOT PERIOD // . Period
#define F_DASH SLASH // - Hyphen/Minus

// US symbols
#define F_EXCL LS(N1)               // ! Exclamation
#define F_AT RA(N2)                 // @ At sign
#define F_HASH LS(N3)               // # Hash
#define F_DLLR RA(N4)               // $ Dollar
#define F_PRCNT LS(N5)              // % Percent
#define F_CRET LS(RIGHT_BRACKET)    // ^ Caret (Dead)
#define F_AMP LS(N6)                // & Ampersand
#define F_STAR LS(BACKSLASH)        // * Asterisk/Star
#define F_LPAR LS(N8)               // ( Left parenthesis
#define F_RPAR LS(N9)               // ) Right parenthesis
#define F_EQ LS(N0)                 // = Equal
#define F_PLUS MINUS                // + Plus
#define F_UNDR QUESTION             // _ Underscore
#define F_SLSH LS(N7)               // / Forward slash
#define F_QUES LS(MINUS)            // ? Question mark
#define F_BSLH RA(MINUS)            // \ Backslash
#define F_PIPE RA(NON_US_BACKSLASH) // | Pipe
#define F_SEMI LS(COMMA)            // ; Semicolon
#define F_COLN LS(PERIOD)           // : Colon
#define F_SQT BACKSLASH             // ' Single quote/Apostrophe
#define F_DQT LS(N2)                // " Double quote
#define F_LT NON_US_BACKSLASH       // < Less than
#define F_GT LS(NON_US_BACKSLASH)   // > Greater than
#define F_LBKT RA(N8)               // [ Left bracket
#define F_LBRC RA(N7)               // { Left brace
#define F_RBKT RA(N9)               // ] Right bracket
#define F_RBRC RA(N0)               // } Right brace
#define F_GRVE LS(EQUAL)            // ` Grave accent (dead)
#define F_TLDE RA(RIGHT_BRACKET)    // ~ Tilde (dead)

// Additional symbols
#define F_POUN RA(N3)        // £ Pound
#define F_EURO RA(E)         // € Euro
#define F_CURR LS(N4)        // ¤ Currency sign
#define F_ACUT PLUS          // ´ Acute accent(dead)
#define F_DIAC RIGHT_BRACKET // ¨ Umlaut (dead)