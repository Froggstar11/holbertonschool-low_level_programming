#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the code.
 * @c: an int.
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
int i;
for (i = 65; i <= 90;i++)
{
if (i == c)
return (1);
}
return (0);
}
