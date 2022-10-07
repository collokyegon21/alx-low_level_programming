#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - multiplies two positive numbers
* @argc: count
* @argv: pointer to array
* Return: int
*/

int main(int argc, char const **argv)
{
	unsigned int mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > 57 || argv[i][j] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mul = atoi(argv[1]) *  atoi(argv[2]);
	printf("%u\n", mul);

	return (0);
}
