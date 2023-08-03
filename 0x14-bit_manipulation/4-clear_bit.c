#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number whose bit value needs to be cleared.
 * @index: The index of the bit to be cleared (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
unsigned long int mask = 1UL << index;
mask = ~mask;
*n &= mask;
return (1);
}
