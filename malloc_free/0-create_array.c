#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: variable name
* @c: variable name
* Return: NULL if size == 0 or the function fails
*/

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int b;

/*Returns NULL if size = 0 */
if (size == 0)
return (NULL);
/*Returns a pointer to the array, or NULL if it fails */
a = malloc(sizeof(char) * size);
if (a == NULL)
return (NULL);
/*creates an array of chars, and initializes it with a specific char */
for (b = 0; b < size; b++)
a[b] = c;
return (a);
}
