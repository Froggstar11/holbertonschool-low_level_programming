#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcmp - compare two strings.
 * @s1: a pointer of char type.
 * @s2: a pointer of char type.
 * Return: an int.
 */
int _strcmp(char *s1, char *s2)
{
int i, result = 0;
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
result = s1[i] - s2[i];
break;
}
}
return (result);
}
