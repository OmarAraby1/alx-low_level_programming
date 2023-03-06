#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: no return
 */
void more_numbers(void)
{
	int i, j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; i <= 14; j++)
		{
			if (j >= 10)
			{
				x = j / 10;
				_putchar(x + '0');
			}
			x = j % 10;
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
