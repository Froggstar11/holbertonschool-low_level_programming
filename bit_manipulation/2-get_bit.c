#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: an int.
 * @index: the index.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return -1;
unsigned long int mask = 1UL << index;
return (n & mask) != 0;
}
