#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *str_concat - concates two strings
* @s1: first string
* @s2: second string
* Return: first string + second string
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int s1_len = strlen(s1);
	int s2_len = strlen(s2);
	int size = s1_len + s2_len + 1;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	s = malloc(s1_len + s2_len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		s[s1_len + 1] = s2[i];

	s[i] = '\0';
	return (s);
	free(s);
}
