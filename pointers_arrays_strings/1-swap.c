#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers.
 * @a: an int.
 * @b: an int.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int valueA = *a;
int valueB = *b;
*a = valueB;
*b = valueA;
}
