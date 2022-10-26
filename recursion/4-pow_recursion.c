#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: power
 * Return: x power of y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (_pow_recursion(x, y - 1) * x);
}
}
