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
int i, j;
int **p = NULL; 
if (height == 0 || width == 0)
return (NULL);
p = (int **)malloc(sizeof(int*) * height);
if (p == NULL)
return (0);
 for (i = 0; i < height; i++)
   {
     for (j = 0; j < width; j++)
       {
	 p[i] = (int *)malloc(sizeof(int) * width);
	 if (p[i] == NULL)
	   return (NULL);
	 *(p + i * height * sizeof(int) + j * sizeof(int)) = 0;
       }
   }
 return (p);
}
