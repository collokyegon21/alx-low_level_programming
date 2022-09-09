#include <stdio.h>

/**
 * main - print alpha reversed using putchar
 * main - print alpha reversed using putchar
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
