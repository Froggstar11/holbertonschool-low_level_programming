#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse a string
 *
 * Return: void.
 */
void rev_string(char *s)
{
int i;
int j = 0;
int size = 0;
for (i = 0; s[i] != '\0'; i++)
{
size++;
}
for (i = size - 1; i >= 0; i--)
{
s[j] = s[i]; 
}
}
