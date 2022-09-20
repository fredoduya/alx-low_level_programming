#include<stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	putchar(*(s + len));
	putchar(10):
}
