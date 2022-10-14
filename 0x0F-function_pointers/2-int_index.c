#include "function_pointers.h"

/**
* int_index - function that searches fot an interger
* @array: the array for an interger
* @size: the number of the elements in the array
* @cmp:pointer to the comparison function
*
* Return: index of first element for which the cmp function does not return 0
* If no element matches, return -1 or  if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
