#include "main.h"
/**
 * print_rev - prints the reverse of a function
 * @s: string
 * Return: always 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	while (x)
	{
		_putchar(s[--x]);
	}
	_putchar('\n');
}
