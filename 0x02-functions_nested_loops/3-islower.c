#include "main.h"
/**
 * _islower(int c)
 * @c: determining variable
 * Return: 1 if successful
 * main - uses inbuilt function
 */

int _islower(int c)
{
	(void)c;

	int x;
	
	x = 1;
	
	{
		if ('c' >= 'a' && 'c' <= 'z')
		{
			x = 1;
		}
		return (x);
	}

}
