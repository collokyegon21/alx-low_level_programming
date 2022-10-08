#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* **alloc_grid - returns pointer to two dimensional array of intergers
* @width: width of the grid
* @height: height of the grid
* Return: pointer to two dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (height == 0 || width == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
		free(ptr);
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[j][i] = 0;
	return (ptr);
}
