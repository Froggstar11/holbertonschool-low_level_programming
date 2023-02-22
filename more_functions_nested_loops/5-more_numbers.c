#include "main.h"
/**
 * more_numbers - check the code
 *
 * Return: void.
 */
void more_numbers(void)
{
int i, j, k;
int array[2];
for (k = 0; k <= 10; k++)
{   
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
array[0] = (i / 10) + 48;
array[1] = (i % 10) + 48;
for (j = 0; j <= 1; j++)
_putchar(array[j]);
}
else if (i < 9)
{
_putchar(i + 48);
}
}
_putchar('\n');
}
}
