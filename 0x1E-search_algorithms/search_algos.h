#ifndef search_algos_h
#define search_algos_h
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print(int i, int j);
void print_array(int *array, size_t L, size_t R);
void convert(int n);
void convert_to_str(int n);
#endif
