#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * main - imprimir
 *
 * Return: Always 0 (return)
 **/
void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
