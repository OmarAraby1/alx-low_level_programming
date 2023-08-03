#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: length
 * Return: no return
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
