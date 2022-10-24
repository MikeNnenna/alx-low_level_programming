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

	while (s[x] != '\0')
		x++;
	x--;
	while (x >= 0)
	{
		putchar(s[x]);
	}
	_putchar('\n');
}
