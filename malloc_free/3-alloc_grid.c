#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a 2D array
* @width: variable
* @height: variable
* Return: a pointer
*/

int **alloc_grid(int width, int height)
{
int **pp;
int x, y;
/*if the width or the height are < 1 return NULL*/
if (width < 1 || height < 1)
return (NULL);
/*reserve height space*/
pp = malloc(sizeof(*pp) * height);
/*if there is not space in memory return NULL*/
if (pp == NULL)
return (NULL);
/*for every row in height reservs space for colum*/
for (y = 0; y < height; y++)
{
pp[y] = malloc(sizeof(**pp) * width);
if (pp[y] == NULL)
{
/*Free the memory in y*/
for (y--; y >= 0; y--)
free(pp[y]);
free(pp);
return (NULL);
}
/*Free the memory in x*/
for (x = 0; x < width; x++)
pp[y][x] = 0;
}
return (pp);
}
