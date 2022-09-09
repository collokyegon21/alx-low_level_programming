#include <stdio.h>

/**
 * main - print all combinations of three different digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;
	for (x = 0; x < 10; x++)
	{
		for (z = 0; z < 10; z++)
		{
			for (z = 0; z < 10; z++)
			{
				if (y > x && z > y)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x != 7 || y != 8 || z != 9)
					{	
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
