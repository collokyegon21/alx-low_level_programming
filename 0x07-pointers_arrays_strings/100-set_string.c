#include "main.h"
#include <stdio.h>

/**
* set_string - set value of a pointer to a char
* @s: pointer to pointer we need to set to
* @to: string to set
*/

void set_string(char **s, char *to)
{
	*s = to;
}
