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
{
putchar(i + 48);  
if ( i != 9)
{  
putchar(44);
putchar(32);
}
} 
putchar('\n');
return (0);
}
