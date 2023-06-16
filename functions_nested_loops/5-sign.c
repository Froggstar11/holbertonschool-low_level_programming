#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number.
 * @n: an int.
 * Return: 1 is n is greater than 0, 0 is n is 0 and -1
 * if n is less than 0.
 **/
int print_sign(int n)
}
if (n > 0)
{  
_putchar(45);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0); 
}
if (n < 0)
{
_putchar(43);
return (-1);
}
return (0);
}
