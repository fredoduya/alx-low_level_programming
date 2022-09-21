#include "main.h"

/**
 * reverse_array - reverse contents of an array
 * @a: pointer to integer parameter
 * @n: pointer to integer parameter
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
