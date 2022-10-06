#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive number
* @argc: count
* @argv: pointer to the array
* Return: 0 or 1
*/



int main(int argc, char *argv[])
{
	int i, int j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
