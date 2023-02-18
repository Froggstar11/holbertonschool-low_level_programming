#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
int characters[] = { 95, 112, 117, 116, 99, 104, 97, 114};
int i;
for (i = 0; i <= 7; i++)
putchar(characters[i]);
putchar('\n');
return (0);
}
