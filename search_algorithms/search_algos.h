#ifdef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int linear_search(int *array, size_t, int value);
int binary_search(int *array, size_t, int value);

#endif