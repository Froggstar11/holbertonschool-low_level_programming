#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initializes it with a specific char
 * @size: an int.
 * @c: an int.
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
char *p = (char *)malloc(sizeof(char) * size);
unsigned int i;
if (size == 0)
return (0);  
if (p == NULL)
return (0);
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
