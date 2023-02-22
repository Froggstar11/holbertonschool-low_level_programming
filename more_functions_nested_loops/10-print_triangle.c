#include "main.h"

/**
 * print_triangle - check the code.
 * @size: an int.
 * Return: void.
 */
void print_triangle(int size)
{
  int i, j;
  int count = 1 - size;
  if(size <= 0)
    _putchar('\n');
  else
    {
      for (i = 0; i < size; i++)
	{
	  for (j = 0; j < size; j++)
	    {
	      if (count != 0)
		_putchar(32);
	      else
		_putchar('#');
	      count--;
	    }
	  _putchar('\n');
	}
    }
}
	      
