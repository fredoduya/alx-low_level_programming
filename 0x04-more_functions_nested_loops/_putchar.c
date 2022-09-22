#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: Character to print
 *
 * Return: 1 Success
 * On Error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

