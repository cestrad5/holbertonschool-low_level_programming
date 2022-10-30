#include "main.h"
/**
 * _strstr - find a string
 * @haystack: the string
 * @needle: the string to be found
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
int i;
int s = 0;

while (needle[s] != '\0')
s++;

while (*haystack)
{
	for (i = 0; needle[i]; i++)
	{
		if (haystack[i] != needle[i])
		break;
	}
	if (i != s)
		haystack++;
	else
	return (haystack);
	}
	return (NULL);
}
