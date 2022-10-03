#include <stdio.h>

/**
* main - entry point to print all arguments
* @argc: count
* @argv: pointer
* Return: 0 or 1
*/

int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i > argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
