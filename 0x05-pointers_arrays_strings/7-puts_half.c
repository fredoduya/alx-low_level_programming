#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - print half of a string
 * @str: input string
 * Return: no return
 */

void puts_half(char *str)
{
		int i;
			int oE = 0;

				if (_strlen(str) % 2 != 0)
						{
									oE += 1;
										}
					for (i = (_strlen(str) + oE) / 2; i < _strlen(str); i++)
							{
										_putchar(str[i]);
											}
						_putchar('\n');
}

