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

    /* Seed the random number generator */
    srand(time(0));

    /* Generate a random number */
    n = rand() - RAND_MAX / 2;

    /* Print the random number */
    printf("Random number: %d\n", n);

    /* Check the sign of the number */
    if (n > 0)
    {
        printf("%d is positive.\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero.\n", n);
    }
    else
    {
        printf("%d is negative.\n", n);
    }

    return 0;
}
