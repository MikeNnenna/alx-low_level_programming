#include "main.h"
/**
 * _islower(int c)
 * @c: determining variable
 * main - uses inbuilt function
 * Return: 1 if successful or 0 if otherwise
 */

int _islower(int c)
{

		if ('c' >= 'a' && 'c' <= 'z')
		{
			return (1);
		}
		else 
		{
			return (0);
		}
}
