#include <stdio.h>

/**
* main - prints its name followed by new line
* @argc: count
* @argv:list
* Return: 0
*/

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
