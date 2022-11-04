#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *string_nconcat - concatenates two strings
* @s1: sttring 1
* @s2: striing 2
* @n: size in bytes of s2
* Return: Always 0
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int s = 0;
unsigned int t = 0;
char *p;
/*if NULL is passed, treat it as an empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s] != '\0')
s++;
/*reserve spaces in memory*/
p = malloc(sizeof(char) * (s + n + 1));
/*If the function fails, free p memory and return NULL*/
if (p == NULL)
{
free(p);
return (NULL);
}
/*copy each position in s1 to p*/
while (s1[s] != '\0')
{
p[s] = s1[s];
s++;
}
/*copy untill \0 or until n*/
while (s2[t] != '\0' && t < n)
{
p[s] = s2[t];
s++, t++;
}
/*add the \0 at the end*/
p[s] = '\0';
return (p);
}
