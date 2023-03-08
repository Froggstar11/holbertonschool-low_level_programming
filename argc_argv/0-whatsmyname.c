#include "main.h"
#include <stdio.h>
/**
 * whatsmyname - prints name.
 * @argc: an int.
 * @argv: a pointer of int array.
 * Return: void.
 */
void whatsmyname(__attribute__ ((unused)) int argc, char *argv[])
{
printf("%s", argv[0]);
}
