#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there is an invalid character in the string.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
for (; *b != '\0'; b++)
{
if (*b != '0' && *b != '1')
return 0;
result <<= 1; /* Shift the result left by 1 position*/
if (*b == '1')
result |= 1; /* Set the least significant bit to 1 if the current bit is '1'*/
}
return (result);
}
