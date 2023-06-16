#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * _isalpha - checks if c is a letter.
 * @c: is a int.
 * Return: 1 if c is a letter, 0 otherwise.
 **/
int _isalpha(int c)
{
if(( c > 96 && c < 123) || ( c > 64 && c < 91))
return (1);
return (0);
}
