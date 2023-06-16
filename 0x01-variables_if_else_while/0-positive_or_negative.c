#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * This function generates a random number and determines
 * whether it is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Random number: %d\n", n);
if (n > 0) {
printf("The number is positive.\n");
} else if (n == 0) {
printf("The number is zero.\n");
} else {
printf("The number is negative.\n");
}
return (0);
}
