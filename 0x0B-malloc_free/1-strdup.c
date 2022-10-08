#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	p = malloc(sizeof(char) * strlen(str) + 1);
	if (p == NULL)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
	free(p);
}
