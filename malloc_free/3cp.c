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
int x = 0;
int y = 0;
int **pp;
/*If width or height is 0 or negative, return NULL*/
if (width <= 0 || height <= 0)
return (NULL);
/*pp size*/
pp = malloc(sizeof(int *) * height);
/*The function should return NULL on failure*/
if (!pp)
return (NULL);

while (y < height)
{
/*reserves space for the rows --int * withe */
pp[y] = malloc(sizeof(int) * width);

if (pp[y] == NULL)
{
for (y = y - 1; y >= 0; y--)
free(pp[y]);
free(pp);
return (NULL);
}
for (x = 0; x < width; x++)
pp[y][x] = 0;
y++;
}
return (pp);
}
