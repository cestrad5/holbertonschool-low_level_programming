#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: int
 * @n: int
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
		printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
		i++;
	}
	printf("\n");
}
