#include "main.h"

/**
 * *_strcpy - copy string to another string
 * @dest: pointer
 * @src: pointer
 * Return: numbers destination
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

