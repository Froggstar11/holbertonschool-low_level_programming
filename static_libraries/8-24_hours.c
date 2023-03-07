#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: void.
 */
void jack_bauer(void)
{
int firstDigitHouers = 0;
int secondDigitHouers = 0;
int firstDigitMinutes = 0;
int secondDigitMinutes = 0;
int i;
int j;
for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar(firstDigitHouers + 48);
_putchar(secondDigitHouers + 48);
_putchar(':');
_putchar(firstDigitMinutes + 48);
_putchar(secondDigitMinutes + 48);
_putchar('\n');
secondDigitMinutes++;
if (secondDigitMinutes > 9)
{
firstDigitMinutes++;
secondDigitMinutes = 0;
}
if (firstDigitMinutes > 5)
{
firstDigitMinutes = 0;
secondDigitHouers++;
}
}
if (secondDigitHouers > 9)
{
firstDigitHouers++;
secondDigitHouers = 0;
}
}
}
