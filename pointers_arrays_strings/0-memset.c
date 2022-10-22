#include "main.h"
/**
 * _memset - recreate memeset
 * @s: a pointer in memory file
 * @b: the value to be set
 * @n: the number of values to be set to the value
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
