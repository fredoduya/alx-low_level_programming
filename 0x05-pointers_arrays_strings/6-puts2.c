#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: input character
 * Return: No return
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		putchar(str[j]);
		j = j + 2;
	}
	putchar('\n');
}

