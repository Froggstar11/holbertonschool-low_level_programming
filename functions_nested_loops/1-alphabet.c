#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: Always 0 (return)
 **/
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
_putchar(i - 32);
_putchar('\n'); 
}
