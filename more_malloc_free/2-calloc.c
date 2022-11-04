#include "main.h"
#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array
*@nmemb: entry
*@size: size
*Return: called memory in 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
char *b;
/*If nmemb or size is 0, then _calloc returns NULL*/
if (nmemb == 0 || size == 0)
return (NULL);
b = malloc(size * nmemb);
/*If malloc fails, free b and returns NULL*/
if (b == NULL)
{
free(b);
return (NULL);
}
/*full the arrat with 0*/
for (a = 0; a < (nmemb * size); a++)
b[a] = 0;
return (b);
}
