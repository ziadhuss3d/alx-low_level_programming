#ifndef _SEARCH_H_
#define _SEARCH_H_
#include <stddef.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t size);
size_t min(size_t a, size_t b);
int jump_search(int *array, size_t size, int value);
int _advanced_binary(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
#endif
