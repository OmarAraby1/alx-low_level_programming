#include "main.h"

/**
 * main - print alphabet lowercase using prototype void print_alphabet(void)
 * Return: 0 Success
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
