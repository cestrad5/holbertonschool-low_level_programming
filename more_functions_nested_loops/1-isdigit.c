#include "main.h"
/**
 * _isdigit - check if an input is a digit
 * @c: type a character
 * Return: 0
 */

int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
