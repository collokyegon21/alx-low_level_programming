#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_realloc - reallocates a memory block using malloc and free
* @ptr: pointer to memory previously allocated
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: size, in bytes of the new memory block
* Return: pointer to the new memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrnew;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL)
	{
		ptrnew = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	ptrnew = malloc(new_size);
	if (ptrnew == NULL)
		return (0);
	return (ptrnew);
	free(ptr)
}
