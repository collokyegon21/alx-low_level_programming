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
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/*p = (int*)calloc(j, sizeof(int))*/
	ptr = (int *)calloc(nmemb, sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		printf("%d", *(ptr + i));

	return (ptr);
}
