#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - search a string for any of set of bytes.
 * @s: a pointer of char type.
 * @accept: a pointer of char type.
 * Return: a pointer of char type.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
int check = 0;
int sizeS = strlen(s);
int sizeAccept = strlen(accept);
char *p;
for (i = 0; i < sizeS; i++)
{
for (j = 0; j < sizeAccept; j++)
{
if (s[i] == accept[j] && check == 0)
{
p = &s[i];
 check = 1;
break;
}
}
}
return (p);
}
