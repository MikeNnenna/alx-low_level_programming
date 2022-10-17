#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 if success
 */
int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x != 'y')
			{
				putchar('x');
				putchar('y ');
			}
			else 
			{
				continue;
			}
		}
	}
	putchar('\n');
	return(0);
}
