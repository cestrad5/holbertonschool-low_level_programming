#include "main.h"
/**
 * puts_half - print half a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
