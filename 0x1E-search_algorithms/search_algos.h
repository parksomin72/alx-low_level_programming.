#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stddef.h>


/* Definition of listint_t (assuming it's a linked list node) */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

/* Definition of skiplist_t */
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s {
    int n;
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
