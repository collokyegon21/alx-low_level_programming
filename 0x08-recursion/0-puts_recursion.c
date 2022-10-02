#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a new string folowed by a new line
* @s: pointer to the string
* Return: void
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
