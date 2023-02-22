#include "main.h"
/**
 * print_triangle - check the code.
 * @size: an int.
 * Return: void.
 */
void print_triangle(int size)
{
  int i, j;
  int count = size;
  if(size <= 0)
    _putchar('\n');
  else
    {
      for (i = 0; i < size; i++)
	{
	  for (j = 0; j < size; j++)
	    {
	      if ( j > count)
		_putchar('#');
	      else
		_putchar(32);
	    }
	  count--;
	  _putchar('\n');
	}
    }
}
	      
