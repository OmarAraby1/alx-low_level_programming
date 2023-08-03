#include <stdio.h>

/**
 * main - print single digit numbers of base 10
 * Return: 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
