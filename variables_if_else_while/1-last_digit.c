#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0
 **/
int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n < 0)
		last = last * -1;
	printf("Last digit of %d is %d", n, random);
	if (last > 5)
		printf("and is greater then 5\n");
	if (last == 0)
		printf("and is 0\n");
	if (last < 6 && last != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
