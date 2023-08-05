#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: the string
 * Return: None
 */

void print_rev(char *s)
{
	int l = _strlen(s);

	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
