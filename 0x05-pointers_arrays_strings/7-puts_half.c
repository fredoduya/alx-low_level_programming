#include "main.h"

/**
 * puts_half - print half of a string
 * @str: input string
 * Return: return 0
 */

void puts_half(char *str)
{
	int i;
	int n;
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < (len - 1); n++)
		{
			putchar(str[n + 1]);
		}
	}
	putchar('\n');
}

