#include <stdio.h>
#include <stdlib.h>

/**
* main - multiples two numbers
* @argc: count
* @argv: pointer to number of array
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		 printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
