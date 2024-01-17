#include <stdio.h>
#include <stdlib.h>

/**
 * exponential_search-Searches for a
 *                    value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: Index where the value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;
size_t mid, left, right;
size_t i;
if (!array)
return (-1);
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}
printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
left = bound / 2;
right = (bound < size) ? bound : size - 1;
while (left <= right)
{
mid = left + (right - left) / 2;
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");
if (array[mid] == value)
return (mid);
if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}
