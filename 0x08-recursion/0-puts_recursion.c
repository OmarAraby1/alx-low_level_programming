#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 * Return: no return
 */
void _puts_recursion(char *s)
{
	_putchar(s[1]);
	char *x = s + 1;
	_puts_recursion(char *x);
	_putchar('\n');
}
