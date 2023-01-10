#include "search_algos.h"

/**
 * binary_search - Searches value in sorted array using Binary search
 * @array: Pointer to first element of array being searched
 * @size: Number of elements in array
 * @value: Value being searched
 *
 * Return: Index where value is located or -1 in other cases
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i, l, r;

	l = 0;
	r = size - 1;
	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; ++i)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		i = (l + r) / 2;
		if (value > array[i])
			l = i + 1;
		else if (value < array[i])
			r = i - 1;
		else
			return (i);
	}
	return (-1);
}
