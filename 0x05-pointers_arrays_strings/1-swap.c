#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 * Return: False
 */

void swap_int(int *a, int *b)
{
	int temp1 = *a;
	int temp2 = *b;

	*a = temp2;
	*b = temp1;
}
