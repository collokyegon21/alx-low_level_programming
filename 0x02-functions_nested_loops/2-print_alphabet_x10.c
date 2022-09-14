#include "main.h"

/**
 * print_alphabet_x10 - This is the user defined function for the code
 *
 * Description: This code prints the alphabet 10 times in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}