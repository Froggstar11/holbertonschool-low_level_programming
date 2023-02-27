#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: a pointer of char type.
 * Return: void.
 */
void rev_string(char *s)
{
int i;
int size = strlen(s);
int newArray[size];
int count = 0;
for (i = size - 1; i >= 0; i--)
{
newArray[count] = s[i];
count++;
}
strcpy(s, newArray);
}
