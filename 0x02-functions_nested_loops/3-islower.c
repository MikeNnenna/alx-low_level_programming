#include "main.h"
/**
 * _islower(int c)
 * @c: determining variable
 * main - uses inbuilt function
 * Return: 0 || 1 (successful)
 */

int _islower(int c)
{
	(void)c;

		if ('c' >= 'a' && 'c' <= 'z')
		{
			return (1);
		}
		else 
		{
			return (0);
		}
}
