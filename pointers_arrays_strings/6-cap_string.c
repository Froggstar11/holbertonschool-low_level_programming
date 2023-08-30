#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @s: a string.
 * Return: a string.
 */
char *cap_string(char *s)
{
int i, j;
char sep[] = {' ', '\t', '\n', ',', ';', '.', '?', '"', '(', ')', '{', '}'};
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; sep[j] != '\0'; j++)
{
if (s[i] == sep[j])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
}
return (s);
}
