#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * @n: an int.
 * Return: void.
 */
void print_to_98(int n)
{
  int i;
  if(n > 98)
    {
      for(i = n; i >= 98; i--)
	{
	  if (i != 98)
	  printf("%d, ",i);
	  if(i == 98)
	  printf("%d", i);  
  
	}
    }
  if(n < 98)
    {
      for(i = n; i <= 98; i++)
	{
	  if(i != 98)
	  printf("%d, ", i);
	  if(i == 98)
	    printf("%d", i);
	}
    }
  if(n == 98)
    printf("%d ",98);
}
