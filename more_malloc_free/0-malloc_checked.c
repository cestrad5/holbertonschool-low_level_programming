#include "main.h"
#include <stdlib.h>

/**
* malloc_checked -function that allocates memory using malloc
*@b: number of bytes
* Return: Always 0
*/

void *malloc_checked(unsigned int b)
{
int *i;

i = malloc(b);
/*if malloc fails, status value = 98*/
if (i == NULL)
exit(98);
return (i);
}
