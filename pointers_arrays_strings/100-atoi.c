#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - convert a string to an integer.
 * @s: a pointer of char type.
 * Return: an int.
 */

int _atoi(char *s)
{
int newNumber;
unsigned int i = 0;
unsigned int min = 0;
unsigned int number = 0;
unsigned int size = strlen(s);
for (i = 0; i < size; i++)
{
if (s[i] == '-')
{
min++;
}
if (s[i] > 47 && s[i] < 58)
{
break;
}
}
while (s[i] > 47 && s[i] < 58)
{
newNumber = (((int)s[i]) - '0'); 
number *= 10;
number += newNumber;
i++;
}
if (min % 2 == 0)
{
return (number);
}
else
{
return (-number);
}
}
