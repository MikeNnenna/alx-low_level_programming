#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: prints int
 * Return: 0 || 1 if successful
 */

int _isdigit(int c);
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
