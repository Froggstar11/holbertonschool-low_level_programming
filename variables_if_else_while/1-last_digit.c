#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = (n%10);
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
if (lastDigit < 6)
printf("Last digit od %d is %d and is less tahn 6 and not 0\n", n, lastDigit);
if (lastDigit == 0)
printf("Last digit of %d is 0 and is 0\n", n);
return (0);
}
