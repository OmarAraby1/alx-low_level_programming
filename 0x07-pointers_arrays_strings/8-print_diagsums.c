#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a 
 * square matrix of integers
 * @a: array of interegrs
 * @size: size of array
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int count1 = 0, count2 = 0;
	int x = size - 1;

	for (i = 0; i < size; i++)
	{
		count1 += a[i][i];
		count2 += a[i][x];
		x = x - 1;
	}
	printf("%d, %d", count1, count2);
}
