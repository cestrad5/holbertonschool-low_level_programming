
#include "main.h"

/**
 * _memcpy - copy a array
 * @dest: destination
 * @src: source
 * @n: number
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
