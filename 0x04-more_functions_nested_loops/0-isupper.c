#include "main.h"

/**
 * _isupper - checks for uppercase
 * main - entry point
 * Return: 1 if successful || 0 if otherwise
 */

int _isupper(int c)
{
	(void)c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
