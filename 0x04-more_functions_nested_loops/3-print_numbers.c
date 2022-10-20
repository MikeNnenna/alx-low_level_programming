#include "main.h"

/**
 * print_numbers - print numbers
 * Return: always 0
 */

void print_numbers(void)

{
	int x;

	x = 0;

	while (x < 10)
	{
		_putchar (x + '0');

		x++;

	}

	_putchar ('\n');

	return (0);
}
