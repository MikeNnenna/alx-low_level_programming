#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: the string
 * Return: 0 always
 */

void _puts(char *str)
{
	int x;
	
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
	return (0);
}
