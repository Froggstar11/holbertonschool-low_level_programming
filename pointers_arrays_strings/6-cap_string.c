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
  int i;
int convert;
int size = strlen(s);
for (i = 0; i < size; i++)
{
  if(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||
     s[i] == '.' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
    {   
if ((i < size - 1) && (s[i+1] < 65 || s[i+1] > 90))
{
convert = s[i+1] - 32;
s[i+1] = convert;
}
}
}
return (s);
}
