#include <stdlib.h>                                                                                                             
#include <time.h>                                                                                                               
#include <stdio.h>  
/*                                                                                                                              
 *
 *main - generating number positive, zero or negative.                                                    
 *                                                                                                                             
 *Return: Always 0                                                                                                               */  
{
	int n ;
	srand(time(0));
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
