#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: concatenate string
 **/
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0;
int j = 0;
/*if NULL is passed, treat it as an empty string*/
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/*check the size of s1 and s2 and stored as i and j*/
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
/*create s and reserve spaces for it, the +1 is for the \0 at the end*/
s = malloc(sizeof(char) * (i + j + 1));
/*The function should return NULL on failure*/
if (s == NULL)
return (NULL);
/*reset conuntes to 0*/
i = j = 0;
/*copy s1 to s*/
while (s1[i] != '\0')
{
s[i] = s1[i];
i++;
}
/*copy s2 to s*/
while (s2[j] != '\0')
{
s[i] = s2[j];
i++, j++;
}
/*add the \0 at the end of s*/
s[i] = '\0';
return (s);
}
