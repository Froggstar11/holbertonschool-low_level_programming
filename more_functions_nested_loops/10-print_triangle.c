#include "main.h"

/**
 * print_triangle - check the code.
 * @size: an int.
 * Return: void.
 */
void print_triangle(int size)
{
  int i, j;
  int count = 0;
  int count2 = size - 1;
  if(size <= 0)
    _putchar('\n');
  else
    {
      for (i = 0; i < size; i++)
	{
	  for (j = 0; j < size; j++)
	    {
	      if (count != count2)
		_putchar(32);
	      else
		_putchar('#');
	      count++;
	    }
	  count2--;
	  _putchar('\n');
	}
    }
}
	      
