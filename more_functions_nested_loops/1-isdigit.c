#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _isdigit - checks if c is a digit.
 * @c: an int.
 * Return: 1 if c is a digit, 0 otherwise.
 **/
int _isdigit(int c)
{
if (c > 47 && c < 58)
return (1);
return (0);
}
