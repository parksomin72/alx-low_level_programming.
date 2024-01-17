#include <stdio.h>
#include "search_algos.h"
#include <stdlib.h>


/**
 * advanced_binary - Searches for a value in a sorted array using advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL)
        return (-1);

    return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in
 * @start: Start index of the subarray
 * @end: End index of the subarray
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
size_t mid;
    if (start > end)
        return (-1);

    printf("Searching in array: %d", array[start]);
    for (size_t i = start + 1; i <= end; i++)
    {
        printf(", %d", array[i]);
    }
    printf("\n");
mid = (start + end) / 2;

    if (array[mid] == value)
    {
        if (mid == start || array[mid - 1] != value)
            return (mid);
        return (advanced_binary_recursive(array, start, mid, value));
    }
    else if (array[mid] < value)
        return (advanced_binary_recursive(array, mid + 1, end, value));
    else
        return (advanced_binary_recursive(array, start, mid - 1, value));
}
