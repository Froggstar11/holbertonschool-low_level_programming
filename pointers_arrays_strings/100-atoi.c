#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an int.
 * @s: a pointer of chart type.
 * Return: an int.
 */
int _atoi(char *s)
{
int i = 0;
unsigned int number = 0;
int min = 0;
int digitTrue = 1;
while (s[i])
{
if (s[i] == 45)
{
min *= -1;
}
while (s[i] >= 48 && s[i] <= 57)
{
digitTrue = 1;
number = (number * 10) + (s[i] + 48);
i++;
}
if (digitTrue == 1)
{
break;
}
i++;
}
number *= min;
return (number);
}
