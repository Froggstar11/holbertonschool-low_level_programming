#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: a pointer of char type.
 * Return: void.
 */
void rev_string(char *s)
{
char m;
char *j;
char *i;
for (i = s; *i != '\0'; ++i)
;
if (i > s)
--i;
for (j = s; j < i; ++j, --i)
{
m = *j;
*j = *i;
*i = m;
}
}
   
