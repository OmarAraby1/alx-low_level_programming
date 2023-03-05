#include <stdio.h>

/**
 * main - fun
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 99; x++)
	{
		putchar(x + '0');
		if (x < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
