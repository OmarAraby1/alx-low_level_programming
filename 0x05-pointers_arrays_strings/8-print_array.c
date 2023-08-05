#include "main.h"

/**
 * print_array - print certain number of elements
 * @a: the array
 * @n: num of elements
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}	
	}
	printf("\n");
}
