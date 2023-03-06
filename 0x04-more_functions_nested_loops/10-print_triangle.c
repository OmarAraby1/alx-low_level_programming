#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: sides length
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
	}
	_putchar('\n');
}
