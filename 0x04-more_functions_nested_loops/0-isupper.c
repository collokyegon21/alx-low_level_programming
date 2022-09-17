#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isupper - check uppercase and lowercase
 *
 * @c: character variable
 *
 * Return:0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
