#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalizes all words of a string.
 * @s: a pointer of char type.
 * Return: a char.
 */
char *cap_string(char *s)
{
int i, j;
int convert;
int size = strlen(s);
int array[] = { ' ', '\t', '\n', ',' , ';', '.', '?', '"', '(', ')', '{', '}' }; 
for (i = 0; i < size; i++)
{
if (i == 0 && s[i] >= 97 && s[i] <= 122)
{
convert = s[i] - 32;
s[i] = convert;
}
else
{
for (j = 0; j < 12; j++)
{
if (s[i] == array[j] && s[i+1] >= 97 && s[i+1] <= 122)
{
convert = s[i+1] - 32;
s[i+1] = convert;
}
}
}
}
return (s);
}
