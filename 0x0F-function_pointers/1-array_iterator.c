#include "function_pointers.h"

/**
* array_iterator - executes function given as parameters
* @array: the array
* @size: size of the array
* @action: pointer to the action needed to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		exit(98);
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
