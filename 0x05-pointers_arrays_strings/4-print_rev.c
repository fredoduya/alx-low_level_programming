#include <stdio.h>
#include "main.h"
/**
 * print_rev - reverse a string
 *
 * @s: string to print
 */

void print_rev(char *s)
{	
	int i = strlen(s);
	while (i--)
	putchar(*(s + i));
	putchar(10);
}





