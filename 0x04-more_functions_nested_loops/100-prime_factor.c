#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of 612852475143
 * Return: 0 Success
 */
int main(void)
{
	long i, j;

	i = 612852475143;
	for (j = 2; j < i; j++)
	{
		while (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%lu", j);
	putchar('\n');
	return (0);
}
