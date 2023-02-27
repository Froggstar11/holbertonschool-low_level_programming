#include "main.h"
#include <string.h>
/**
 *_strcpy - copies a string.
 * @dest: a pointer of char type.
 * @src: a pointer of char type.
 * Return: a char pointer.
 */
char *_strcpy(char *dest, char *src)
{
int i;
int size = strlen(src);
for (i = 0; i <= size; i++)
{
dest[i] = src[i];
}
return (dest);
}
