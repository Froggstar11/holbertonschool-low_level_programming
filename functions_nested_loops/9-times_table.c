#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * times_table - prints the 9 times table.
 *
 * Return: Always 0 (return)
 **/
void times_table(void)
{
int i;
int j;
int firstDigit = 0;
int secondDigit = 0;
int result = 0;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
result = i * j;
firstDigit = result / 10;
secondDigit = result % 10;
if (j != 9 && result <= 9 && j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
if (j != 9 && result > 9 && j != 0)
{
_putchar(44);
_putchar(32);
}
if (result > 9)
_putchar(firstDigit + 48);
_putchar(secondDigit + 48);
}
_putchar('\n');
}
}
