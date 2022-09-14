#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Description: This code prints alphabets in lowercase followed by a new line
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
