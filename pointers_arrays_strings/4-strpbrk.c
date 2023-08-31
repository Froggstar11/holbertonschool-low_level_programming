#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - gets the length of a prefix substring.
 * @s: a pointer of char type.
 * @accept: a pointer of char type.
 *
 * Return: a unsigned int.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
  return (&(s[i]));
}
}
return (NULL);
}
