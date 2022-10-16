#include "variadic_functions.h"

/**
* print_strings - prints string followed by new line
* @separator: string to beprinted between two integers
* @n: number of strings [assed to the function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptr;

	va_list(args);

	va_start(args, n);
	while (i < n)
	{
		ptr = va_arg(args, *char);
		if (i != 0)
			printf("%s", separator ? separator : "");
		printf("%s", ptr ? ptr : "nil");
		i++;
	}
	va_end(args);
	printf("\n");
}
