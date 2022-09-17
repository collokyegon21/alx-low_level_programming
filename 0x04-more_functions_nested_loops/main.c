#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program ignition
 *
 * Return:0
 */

int mul(int a, int b)
{
	return (a * b);
}

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}

void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				putchar(x / 10 + '0');
			}
			putchar(x % 10 + '0');
		}
		putchar('\n');
	}
}

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		putchar('_');
	}
	putchar('\n');
}

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			if (x > y)
			{
				putchar(' ');
			}
			if (y == x)
			{
				putchar('\\');
			}
		}
		putchar('\n');
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}

void print_square(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			putchar('#');
		}
			putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}
}

void print_triangle(int size)
{
	int i;
	int j;

	for  (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		if (size <= 0)
		{
			putchar('\n');
		}
		putchar('\n');
	}
}

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	print_numbers();
	more_numbers();
	print_line(20);
	print_diagonal(20);
	print_square(5);
	print_triangle(10);
	return (0);
}
