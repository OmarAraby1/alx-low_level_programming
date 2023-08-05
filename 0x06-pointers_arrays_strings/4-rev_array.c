#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array
 * @n: number of elements
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
