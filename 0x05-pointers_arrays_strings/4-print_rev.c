#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
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
