#include "main.h"
/**
* _abs - Write a function that computes the absolute value of an integer.
* a: integer input
* Return: absolute value of a
*/
int _abs(int a)
{
	if ( a >= 0)
		return (a);

	else
	{
		a = a*(-1);
		return (a);
	}
}
