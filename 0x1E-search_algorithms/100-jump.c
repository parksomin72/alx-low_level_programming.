#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
#define MIN(x, y) ((x) < (y) ? (x) : (y))

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return:Index where the value is located,or-1 if not present or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
size_t step, prev, end, i;
if (array == NULL)
return (-1);
step = sqrt(size);
prev = 0;
end = MIN(step, size);
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
while (array[end - 1] < value)
{
prev = step;
step += sqrt(size);
if (prev >= size)
return (-1);
end = MIN(step, size);
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
}
printf("Value found between indexes [%lu] and [%lu]\n", prev, end);
for (i = prev; i < end; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
