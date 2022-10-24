#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
