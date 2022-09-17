#include "main.h"

/**
 * print_line - print a straight line on terminal
 *
 * @x: variable x
 * @n: variable n
 *
 * Return : 0 always
 */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
