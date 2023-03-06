#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer printed
 */
void print_number(int n)
{
	int i = 0;
	int j, k, frac;
	int temp = n;
	int coef = 10;

	while (temp / 10 != 0)
	{
		i += 1;
		temp = temp / 10;
	}
	if (n < 0)
	{
		n = n * -1;
		temp = temp * -1;
		_putchar('-');
	}
	_putchar(temp + '0');
	for (j = i; j > 0; j--)
	{
		if (j == 1)
		{
			_putchar(n % 10 + '0');
		}
		else
		{
			for (k = j; k > 2; k--)
			{
				coef = coef * 10;
			}
			frac = n / coef;
			coef = 10;
			_putchar(frac % 10 + '0');
		}
	}
}
