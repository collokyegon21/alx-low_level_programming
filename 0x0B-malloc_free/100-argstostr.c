#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *argstostr - concates all arguments
* @ac: count
* @av: vector
* Return: pointer to a new string
* or NULL if it fails.
*/

char *argstostr(int ac, char **av)
{
	char *args;
	int i = 0, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len += strlen(av[i]) + 1;
		i++;
	}

	len += 1;
	args = malloc(sizeof(char) * len);
	if (!args)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			args[k++] = av[i][j++];
		args[k++] = '\n';
		i++;
	}
	args[k] = '\0';
	return (args);
}
