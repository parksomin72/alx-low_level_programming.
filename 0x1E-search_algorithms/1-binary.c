#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
size_t left, right, mid;
if (array == NULL)
return (-1);
left = 0;
right = size - 1;
while (left <= right)
{
mid = left + (right - left) / 2;
{
size_t i;
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
if (i < right)
printf("%d, ", array[i]);
else
printf("%d", array[i]);
}
printf("\n");
}
if (array[mid] == value)
return (mid);
if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}

