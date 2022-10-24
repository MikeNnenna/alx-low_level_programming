#include "main.h"
/**
 * puts2 - prints every other character
 * @str: the string
 */
void puts2(char *str)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(s[x]);
			x++;
		}
		_putchar('\n');
	}
}
