#include "main.h"

/**
 * print_rev - print a string in  reverse
 * @s: input string
 * Return: no return
 */

void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		putchar(*s);
		count--;
	}
		putchar('\n');
}

