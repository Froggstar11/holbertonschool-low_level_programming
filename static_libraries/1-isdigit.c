#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check the code
 * @c: an int
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
int i;
for (i = 48; i <= 57; i++)
{
if (c == i)
return (1);
}
return (0);
}

