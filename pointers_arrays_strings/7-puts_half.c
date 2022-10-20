#include "main.h"
/**
 * puts_half - print half a string
 * @str: the string
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}

	i = i / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
