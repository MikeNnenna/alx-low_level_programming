#include <unistd.h>
/** 
 * _putchar - writes the character _putchar to stdout
 * @_putchar: the character to print
 * Return: 0 if success
 */
int _putchar(char _putchar)
{
	return (write(0, &_putchar));
}
