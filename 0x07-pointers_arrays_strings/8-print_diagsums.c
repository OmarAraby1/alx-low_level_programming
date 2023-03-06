#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: array of interegrs
 * @size: size of array
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int count1, count2;

	count1 = 0;
	count2 = 0;
	for (i = 0; i < size; i++)
	{
		count1 += a[(size * i) + i];
		count2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", count1, count2);
}
