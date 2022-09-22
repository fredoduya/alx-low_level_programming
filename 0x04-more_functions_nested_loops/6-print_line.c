#include "main.h"
#include <stdio.h>


/**
 * print_line - print line depending on an integer
 * @n: number of '_' cheacters in use
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
