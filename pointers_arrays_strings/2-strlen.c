#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string.
 * @s: a pointer of char type.
 * Return: the number of the size of the s.
 */
int _strlen(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
count++;
return (count);
}
