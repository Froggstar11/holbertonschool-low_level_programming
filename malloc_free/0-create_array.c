#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char p = (char *)malloc(sizeof(char) * size);
if (p == NULL)
return (0);
p[0] = c;
return (p);
}
