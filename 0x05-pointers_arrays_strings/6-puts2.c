#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: input character
 * Return: No return
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
	if (i % 2 == 0)
		putchar(*(str + i));
	i++;
	}
	putchar(10);
}

