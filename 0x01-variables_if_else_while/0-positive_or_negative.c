#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/* main - entry point of code*/

/* Description: main - starting point of code */

/* Return: 0 if success*/

int main(void)
{
	int n;
	srand(time(0\n));

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);	
	}
	return (0);
}
