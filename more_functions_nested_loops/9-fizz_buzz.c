#include <stdio.h>
#include "main.h"
/**
 * main - prints from 1 to 100, but for multiples of three print Fizz,
 * multiples of five pront Buzz and both multiples prints FizzBuzz.
 *
 * Return: void.
 **/
void main(void)
{
int i;
for (i = 0; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
}
printf("\n");
}
