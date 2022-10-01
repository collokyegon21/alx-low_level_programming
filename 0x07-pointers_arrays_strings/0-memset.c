#include <stdio.h>
#include "main.h"

/**
* _memset - fills memory with constant byte
* @s: string
* @b: a character
* @n: an interger
* Return: a string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
	*(s + i) = b;
	i++;
}
return (s);
}
