#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - check the code
 * @s: a pointer of char type.
 * @c: a char.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;
int size = strlen(s);
char *position;
for (i = 0; i < size; i++)
{
if (s[i] == c)
{
position = &s[i];
break;
}
else
{
return (NULL);
}
}
return (position);
}
