#include <stdio.h>
#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}





