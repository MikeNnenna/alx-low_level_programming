#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: determining variable
 * main - uses inbuilt function
 * Return: 1 if successful or 0 if otherwise
 */

int _islower(int c)
{

		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
