#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t start, size_t end, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_helper(int *array, int value, size_t low, size_t high);
#endif /* SEARCH_ALGOS_H */
