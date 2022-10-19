#include "main.h"
/**
 * _islower(int c)
 * @c: determining variable
 * main - uses inbuilt function
 * Return: 1 if successful
 * on error, 0 is returned, and errno is set appropriately
 */

int _islower(int c)
{
	int x;
	
	x = 1;

	int y;

	y = 0;
	
	(void)c;

	{
		if ('c' >= 'a' && 'c' <= 'z')
		{
			return (x);
		}
		
		else
	{
		return (y);
	}
	}
}
