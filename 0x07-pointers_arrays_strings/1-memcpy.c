#include "main.h"
#include <stdio.h>

/**
* _memcpy -fills memory with another buffer
* @dest: source string
* @src: string for filling
* @n: length of buffer
* Return: new string
*/

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
