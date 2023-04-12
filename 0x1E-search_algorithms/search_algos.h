#ifndef search_algos_h
#define search_algos_h
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print(int i, int j);
void convert(int n);
#endif
