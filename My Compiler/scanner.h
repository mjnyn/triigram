/**
 * @file    scanner.h
 * @brief   Definitions for the exported variables and functions for the lexical
 *          analyser (scanner) of SIMPL-2018.
 * @author  W. H. K. Bester (whkbester@cs.sun.ac.za)
 * @date    2018-07-07
 */

#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>
#include "token.h"

/**
 * Intialises the scanner.
 *
 * @param[in]   in_file
 *     the (already open) source file
 */
void init_scanner(FILE *in_file);

/**
 * Gets the next token from the input (source) file.
 *
 * @param[out]  token
 *     contains the token just scanned
 */
void get_token(Token *token);

#endif /* SCANNER_H */
