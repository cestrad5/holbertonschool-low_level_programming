#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the array of int using alloc_grid
 * @grid: 2D array
 * @height: height
 * Return: Always 0 (Success);
 */
void free_grid(int **grid, int height)
{
int x;
/*free row by row*/
for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}
