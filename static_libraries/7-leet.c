#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - check the code for
 * @s: a char.
 * Return: a char.
 */
char *leet(char *s)
{
int i, j;
int size = strlen(s);
char array1[] = { 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
int array2[] = { 4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
for (i = 0; i < size; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == array1[j])
{
s[i] = array2[j] + '0';
}
}
}
return (s);
}
