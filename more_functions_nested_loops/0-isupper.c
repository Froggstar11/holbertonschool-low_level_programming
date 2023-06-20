#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _isupper - checks if c is uppercase.
 * @c: an int.
 * Return: 1 if c is uppercase, 0 otherwise.
 **/
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
return (0);
}
