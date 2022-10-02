#include "main.h"

/**
* _strlen_recursion - returns length of a string
* @s: string to search for
* Return: int
*/

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
