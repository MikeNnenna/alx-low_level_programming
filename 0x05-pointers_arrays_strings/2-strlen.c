#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s : string to be returned
 * Return: length of the string
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return(x);
}
