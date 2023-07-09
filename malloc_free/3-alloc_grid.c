#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - assignate memory for bidimensional array 
 * @width: an int.
 * @height: an int.
 * Return: an int.
 */
int **alloc_grid(int width, int height)
{
  int i, j, z;
int **p = NULL; 
if (height == 0 || width == 0)
return (NULL);
p = (int **)malloc(sizeof(int *) * height);
if (p == NULL)
return (0);
 for (i = 0; i < height; i++)
   {
     p[i] = (int *)malloc(sizeof(int) * width);   
     for (j = 0; j < width; j++)
       {
	 if (p[i] == NULL)
	   {
	     for (z = 0; z < j; z++)
	       free(p[z]);
	     free(p);
	   return (NULL);
	   }
	 p[i][j] = 0;
       }
   }
 return (p);
}
