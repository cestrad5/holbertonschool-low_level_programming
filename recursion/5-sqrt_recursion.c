#include "main.h"
/**
* check_sqrt - checks if the square root is a natural
* @n: number
* @root: square root
* Return: check_sqrt
*/

int check_sqrt(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	if (root == n / 2)
	{
		return (-1);
	}

	return (check_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (check_sqrt(n, 0));
}
