#include<stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverse a string value
 *
 * @s: string to print
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	putchar(*(s + len));
	putchar(10):
}
