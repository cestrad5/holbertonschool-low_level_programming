#include "main.h"
/**
* _strcat - Write a function that concatenates two strings.
* @src: string 1
* @dest: string 2
* Return: string 1+2
*
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}
return (dest);
}
