#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: the string
 * Return: 0 always
 */

void _puts(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		_puts(str[x]);
		x++;
	}
	_puts('\n');
	return (0);
}
