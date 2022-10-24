#include "main.h"
/**
 * print_rev - prints the reverse of a function
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int x;
	
	x = 0;

	while (*s != '\0')
		x++;
	x--;
	while (x >= 0)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
