#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap values of a and b.
 * @a: a pointer of int type.
 * @b: a pointer of int type.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
int newValueA = *b;
int newValueB = *a;
*a = newValueA;
*b = newValueB;
}
