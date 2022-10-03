#include <stdio.h>

/**
* main - prints number of arguments passed
* @argc: count
* @argv: pointer
* Return: 0 or 1
*/

int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
