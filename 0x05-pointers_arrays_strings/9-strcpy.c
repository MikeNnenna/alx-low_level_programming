#include "main.h"
/**
 * *_strcpy - copies string
 * @dest: char pointer
 * @src: second char pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;
	
	while (src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
