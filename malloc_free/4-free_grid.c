#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a grid of integers.
 * @grid: the address of the two dimensional grid.
 * @height: height of the grid.
 *
 * Return: void.
 */
void free_grid(int **grid,__attribute__((unused)) int height)
{
int i;
for (i = 0; grid[i] != NULL; i++)
{
free(grid[i]);
grid[i] = NULL;
}
free(grid);
grid = NULL;
}
