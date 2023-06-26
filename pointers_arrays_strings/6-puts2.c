#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: a pointer of char type.
 * Return: void.
 */
void puts2(char *str)
{
int i;
int count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (count % 2 == 0) 
_putchar(str[i]);
count++; 
}
_putchar('\n');
}
