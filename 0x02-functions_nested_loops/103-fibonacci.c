#include <stdio.h>
/**
 * main -Print the sun of Even fibonacci numbers
 * less than 4000000
 * Return: Nothing!
 */
int main(viod)
{
int i =0;
log j =1, k =2, sum = k;
while (k+j < 4000000)
{
k += j;
if (k % 2 == 0)
sum += k;
j = k - j;
++i;
}
printf("%ld\n", sum);
return (0);
}
