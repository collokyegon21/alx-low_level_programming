#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9 except 4 and 2
 *
 * @i: variable i
 *
 * Returns: always returns 0
 *
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
