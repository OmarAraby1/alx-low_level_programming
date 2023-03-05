#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - function prints whether a number is positive or negative or zero
 * Return: 0 (Success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
