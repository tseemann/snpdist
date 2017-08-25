/*
 *  Torsten Seemann
 *  Copyright (C) 2017 Torsten Seemann
 *  
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 3
 *  of the License, or (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _SNPDISTS_H_
#define _SNPDISTS_H_

#include "kseq.h"

int distance(const char* restrict a, const char* restrict b, const int L);
int compute_distance_matrix(int quiet, int csv, int corner, char* fasta);
void print_header(int corner, int N, char sep, char* name);
void print_body( int N, char sep, char* name, char* seq);

#define MAX_SEQ 1000000
#endif
