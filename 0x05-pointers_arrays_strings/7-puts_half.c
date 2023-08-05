#include "main.h"

/**
 * puts_half - prints half of string
 * @str: the string
 * Return: none
 */

void puts_half(char *str)
{
	int i = 0;
	int mid;

	while (str[i] != '\0')
	{
		i++;
	}
	mid = cail(i / 2);
	for (; str[mid] != '\0'; mid++)
	{
		_putchar(str[mid]);
	}
	_putchar('\n');
}
