#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 *  binary_to_uint - check code.
 * @b: a char pointer.
 * Return: an int.
 */
unsigned int binary_to_uint(const char *b)
{
char c;
unsigned int result;
size_t i;
if (b == NULL)
return 0;
result = 0;
for (i = 0; b[i] != '\0'; i++)
{
c = b[i];
if (c == '0' || c == '1')
{
result = (result << 1) + (c - '0');
}
else
{
return 0;
}
}
return result;
}
