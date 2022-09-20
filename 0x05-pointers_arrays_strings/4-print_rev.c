#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - reverse a string
 * @s: input string
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
