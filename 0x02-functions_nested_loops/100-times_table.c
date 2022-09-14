#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number of the times table
 */

void print_times_table(int n)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}
	printf("%d\n", z);
	return (0);
}
