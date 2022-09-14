#include "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
