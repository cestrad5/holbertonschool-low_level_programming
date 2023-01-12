#include "search_algos.h"

/**
 * jump_search - searches for a value using the Jump search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index where value is found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumps = sqrt(size);
	size_t i = 0, j = 0;

	if (!array)
		return (-1);
	while (j <= size)
	{
		if (j != 0)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[j] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, j);
			while (i < j)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
			return (-1);
		}
		if (j + jumps > size)
		{
			printf("Value checked array[%lu] = [%d]\n", j, array[j]);
			printf("Value found between indexes [%lu] and [%lu]\n", j, j + jumps);
			while (j < size)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
				j++;
			}
			return (-1);
		}
		i = j;
		j += jumps;
	}
	return (-1);
}
