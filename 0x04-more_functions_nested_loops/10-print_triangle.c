#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print triangle
 * @size: height of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int spaces;

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces --)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

