#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0 if success
 */
int main(void)
{
	int x;
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	if (x == '9');
	{
		continue;
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

