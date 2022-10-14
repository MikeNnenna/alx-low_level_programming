#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0 if successful
 */

int main(void)
{
	char (abc);

	for (abc = 'z'; abc >= 'a'; abc--)
	{
		putcha(abc);
	}
	putchar('\n');
	return (0);
}
