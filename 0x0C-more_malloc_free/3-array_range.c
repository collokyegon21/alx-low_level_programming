#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *array_range - creates array of intergers
* @min: minimum value
* @max: maximum value
* Return: pointer to newly allocated memory
*/

int *array_range(int min, int max)
{
	int *p;
	int i;
	
	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == 0)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		p[i++] = min++;

	return (p);
}
