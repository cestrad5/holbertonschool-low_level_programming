#include "main.h"
#include <stdlib.h>
/**
* *_strdup - returns a pointer
* @str: string to allocate
* Return: pointer
**/
char *_strdup(char *str)
{
char *s;
int i = 0;
int j = 0;
/*Returns NULL if str = NULL*/
if (str == NULL)
return (NULL);
/*find the size of the str and stored at i*/
while (str[i] != '\0')
i++;
/*reserve memory and s store the addres*/
s = malloc((sizeof(char) * i) +1);
/*returns NULL if insufficient memory was available*/
if (s == NULL)
return (NULL);
/*coppy de conten from srt to s places by place*/
while (str[j] != '\0')
{
s[j] = str[j];
j++;
}
return (s);
}
