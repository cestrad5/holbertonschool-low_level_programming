#include "function_pointers.h"
/**
* array_iterator - Executes a function on each element of an array
* @array: The array
* @size: The size of array
* @action: A pointer to the function to be executed
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;
/**executes action for each element of array*/
for (i = 0; i < size; i++)
action(array[i]);
}
