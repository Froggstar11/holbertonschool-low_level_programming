#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char *p = (char *)malloc(sizeof(char) * size);
int i;
if (p == NULL)
return (0);
for (i = 0; i < size; i++)
p[i] = c;   
return (p);
}
