#include "variadic_functions.h"

/**
* print_numbers - prints numbers followed by anew line
* @separator: string to be printed between numbers
* @n: number of intergers to be passed between variables
* Return: if separator is null dont print anything
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s", separator ? separator : "");
		i++;
	}
	va_end(args);
	printf("\n");
}
