#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - allocates memory for a number of array
* @nmemb: size of array
* @size: size of the elements in array
* Return: on success returns address of memory block
* on failure returns NULL pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*p = (int*)calloc(j, sizeof(int))*/
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		((char *)ptr)[i++] = 0;

	return (ptr);
}
