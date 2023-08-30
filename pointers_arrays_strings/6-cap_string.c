#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: a string.
 * Return: a string.
 */
char *cap_string(char *s)
{
int i, j;
char separators[] = {' ', '\t', '\n', ',', ';', '.', '?', '"', '(', ')', '{', '}'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (s[i] == separators[j])
{
if (s[i+1] >= 97 && s[i+1] <= 122)
{
s[i+1] = s[i+1] - 32;
}
}
}
}
return (s);
}
