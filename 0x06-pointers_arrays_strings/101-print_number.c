#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer
 * Return: nothing
 */

void print_number(int n)
{
	int temp = n;
	int nth = 0;
	int i = 0;
	int dig;
	int pow = 1;

	while (temp >= 10)
	{
		temp /= 10;
		nth++;
	}
	ds = nth;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (i < nth)
	{
		pow *= 10;
		i++;
	}
	while (i < nth)
	{
		dig = n / pow;
		n -= n * pow;
		_putchar(dig + '0');
		i++;
		pow /= 10;
	}
}
