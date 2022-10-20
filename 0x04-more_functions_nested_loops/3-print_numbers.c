#include "main"

/**
 * print_numbers - prints numbers
 * main - entry point 
 * Return: 0 always
 */

void print_numbers(void)
{
	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
