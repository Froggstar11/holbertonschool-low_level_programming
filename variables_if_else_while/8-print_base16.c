#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - imprimir
 *
 * Return: Always 0 (return)
 **/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar(48 + i);
for (i = 97; i < 103; i++)
putchar(i);
putchar('\n');
return (0);
}
