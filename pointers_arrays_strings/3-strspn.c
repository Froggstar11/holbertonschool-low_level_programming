#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code
 * @s: a pointer of char type.
 * @accept: a pointer of char type.
 * Return: an unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, z;
unsigned int newPosition = 0;
unsigned int sizeS = strlen(s);
unsigned int sizeAccept = strlen(accept);
for (i = 0; i < sizeS; i++)
{
for (j = 0; j < sizeAccept; j++)
{
if (s[i] == accept[j])
{
newPosition = 1;
}
}
if (newPosition != 1)
{
z = i;
break;
}
newPosition = 0;
}
return (z);
}
