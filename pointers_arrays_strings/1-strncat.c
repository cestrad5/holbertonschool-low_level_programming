#include "main.h"
/**
* _strncat - concatenates two strings.
* Variables
* @dest: string
* @src: string
* @n: index
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
/* store in i the lengh of dest */
while (dest[i] != '\0')
{
i++;
}
/*add characters to the dest string until n bites of src*/
while (src[j] != '\0' && j < n)
{
dest[i + j] = src[j];
j++;
}
/*the result is the original dest + n bites of src*/
return (dest);
}
