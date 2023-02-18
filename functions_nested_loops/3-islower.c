#include "main.h"

/**
 * _islower - if the parameter c is lowercase returns 1 otherwise 0.
 * @c: is a character.
 * Return: 1 if c is lowercase otherwise 0.
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
