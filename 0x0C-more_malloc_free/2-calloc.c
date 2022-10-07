#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *_calloc - allocates memory for a number of array
* @nmemb: number of items to be allocated
* @size: size of the array
* Return: 0 or 1
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *p;

	if (nemb == 0 || size == 0)
		return (NULL);

	/*p = (int*)calloc(j, sizeof(int))*/

	void *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	p = ptr;

	for (i = 0; i < (size * nmemb); i++)
		p[i] = '\0';

	return (ptr);
}
