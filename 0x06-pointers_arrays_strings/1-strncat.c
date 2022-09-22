#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destlen = 0;
	int counter = 0;

	while (dest[counter] != '\0')
	{
		destlen++;
		counter++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
