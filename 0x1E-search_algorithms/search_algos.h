#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stddef.h>


/* Definition of listint_t (assuming it's a linked list node) */
/**
 * struct listint_s - singly linked list node
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 */
typedef struct listint_s
{
int n;
size_t index;
struct listint_s *next;
} listint_t;

/* Definition of skiplist_s */
/**
 * struct skiplist_s - singly linked list node with an express lane
 * @n: Integer value stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;

/* Function prototypes */
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
size_t min(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t start, size_t end, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_helper(int *array, int value, size_t low, size_t high);
int binary_search_recursion(int *array, int value, size_t low, size_t high);
#endif /* SEARCH_ALGOS_H */
