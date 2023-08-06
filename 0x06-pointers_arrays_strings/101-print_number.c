#include "main.h"
#include <math.h>
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
	int dig, ds;

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
	while (i <= ds)
	{
		dig = n / pow(10, nth);
		n -= n * pow(10, nth);
		_putchar(dig + '0');
		i++;
		nth--;
	}
}
