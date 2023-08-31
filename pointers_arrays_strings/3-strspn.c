#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring.
 * @s: a pointer of char type.
 * @accept: a pointer of char type.
 *
 * Return: a unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count = 0, check = 1;
for (i = 0; s[i] != '\0' && check != 2; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
count++;
check = 0;
break;
}
else if (accept[j] != s[i])
check = 2;
}
}
return (count);
}
