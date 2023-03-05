#include <stdio.h>

/**
 * main - a function
 * Return: 0 (Success)
 */

int main(void)
{
	char x;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
