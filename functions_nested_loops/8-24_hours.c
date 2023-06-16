#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: void.
 **/
void jack_bauer(void)
{
int minutes;
int houers;
for (houers = 0; houers < 24; houers++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar((houers / 10) + 48);
_putchar((houers % 10) + 48);
_putchar(':');
_putchar((minutes / 10) + 48);
_putchar((minutes % 10) + 48);
_putchar('\n');
}
}
}
