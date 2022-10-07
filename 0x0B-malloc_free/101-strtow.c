#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* numberlen - calculates number of words
* @str: string being passed to check length
*
* Return: number of words
*/

int numberlen(char *str)
{
	int a, b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			b++;
		}
	}
	return (b);
}

/**
* **strtow - splits a string into words
* @str: string to print
* Return: pointer to an array of string
*/

char **strtow(char *str)
{
	char **p, *ptr;
	int words = 0, b = 0, c = 0, len = 0;

	if (str == NULL || *str == 0)
		return (NULL);
	words = numberlen(str);
	if (words == 0)
		return (NULL);
	p = malloc((words + 1) * sizeof(char *));
	if (p == 0)
		return (NULL);
	for (; *str != '\0' &&  b < words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			ptr = str;
			for (; *str != ' ' && *str != '\0';)
			{
					len++;
					str++;
			}
			p[b] = malloc((len + 1) * sizeof(char));
			if (p[b] == 0)
			{
				free(p);
				return (NULL);
			}
			while (*ptr != ' ' && *ptr != '\0')
			{
				p[b][c] = *ptr;
				ptr++;
				c++;
			}
			p[b][c] = '\0';
			b++; c = 0; len = 0; str++;
		}
	}
	return (p);
}
