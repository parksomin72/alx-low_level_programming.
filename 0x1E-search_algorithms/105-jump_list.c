#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list -Searches for a value in a sorted list using Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return:Pointer to the first node where value is located,or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step = sqrt(size);
listint_t *node = list, *jump = list;
if (!list)
return (NULL);
while (jump->index < size && jump->n < value)
{
node = jump;
for (step += sqrt(size); jump->index < step && jump->index
		< size; jump = jump->next)
printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
}
printf("Value found between indexes [%ld] and [%ld]\n",
		node->index, jump->index);
for (; node->index < jump->index && node->n < value; node = node->next)
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
if (node->n == value)
return (node);
return (NULL);
}
