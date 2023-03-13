#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional int array.
 * @width: an int.
 * @size: an int.
 *
 * Return: a double pointer of char type.
 */
int **alloc_grid(int width, int height)
{
  if (width < 1 || height < 1)
    {
      return (NULL);
    }
  else
    {
      int **p =(int **)malloc(sizeof(int *) * width);
      int i, j;
      if (p != NULL)
	{
	  for (i = 0; i < width; i++)
	    {
	      *(p+1) = (int *)malloc(sizeof(int) * width);
	    }
	  for (i = 0; i < height; i++)
	    {
	      for (j = 0; j < width; j++)
		{
		 p[i][j] = 0;
		}
	    }
	  return (p);
	}
      else
	{
	  return (NULL);
	}
    }
}
