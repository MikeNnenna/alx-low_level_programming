#include "main.h"
#include <stdio.h>
/**
 * void print_array - prints some numbers in the array
 * @a: an array
 * @n: last integer
 */
void print_array(int *a, int n)
{
	int count;
	
	count = 0;
	
	while (count < n)
	{
		if (count != (n - 1))
			printf("%i, ", a[count]);
		else
			printf("%i", a[count]);
		count++;
	}
	printf("\n");
}
