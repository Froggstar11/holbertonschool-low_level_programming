#include "main.h"

/**
 * _isalpha - check the code.
 * @c: an int.
 * Return: 1 if c is a letter, lowercase or uppercase.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 90 && c <= 90)
return (1);
return (0);
}
