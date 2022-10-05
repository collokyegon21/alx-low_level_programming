#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @str: duplicate of the string
* Return:NULL if str = NULL  if insufficient memory was available
* or returns a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *p;
	int i;

	i = 0;
	if (!(p = (char *)malloc(sizeof(char) * strlen(str) + 1))
		return (NULL);
	while (*str)
		p[i++] = *str++;
	p[i] = '\0';
	return (p);
}

/**
* strlen - prints length of a string
* @s: pointer to the string
* Return: 0 or 1
*/

int strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
