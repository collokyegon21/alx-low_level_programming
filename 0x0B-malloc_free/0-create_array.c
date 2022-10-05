#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array of char and initializes it
* @size: size of array
* @c: char to initialize
* Return: NULL if size is 0 or its fails
* or pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size)

	if (p == 0 || size == 0)
		return (0);
	while (size--)
		p[size] = c;

	return (p);
}
