#include "main.h"

/**
 * puts2 - print only odd chars
 * @str: string
 * Return: none
 */

void puts2(char *str)
{
	int i =0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
