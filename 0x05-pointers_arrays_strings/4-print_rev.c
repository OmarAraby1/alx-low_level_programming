#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 * Return: None
 */

void print_rev(char *s)
{
	int i = 0;
	int j, l;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (j = l - 1; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
