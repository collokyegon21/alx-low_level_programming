#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *string_nconcat - concates two strings
* @s1: first string
* @s2: second string
* @n: index
* Return: 0 or 1
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		p[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		p[len++] = s2[i];

	p[len] = '\0';

	return (p);
}
