#include "function_pointers.h"

/**
* print_name - prints name of a given parameter
* @name:the name to print
* @f: function to print the name
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		exit(98);
	(*f)(name);
}
