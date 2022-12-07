/*
 * options file format additional lexer declarations
 *
 * This file is part of GTick
 *
 * Copyright 2003, 2004, 2005, 2006 Roland Stigge <stigge@antcom.de>
 *
 * GTick is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * GTick is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GTick; if not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef OPTIONLEXER_H
#define OPTIONLEXER_H

#include <stdio.h>

extern FILE *option_in;
int option_parse();

void option_lexer_init(char* filename);
void option_lexer_deinit();

#endif /* OPTIONLEXER_H */
