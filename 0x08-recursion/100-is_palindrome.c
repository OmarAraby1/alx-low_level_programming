#include "main.h"
/**
 * length_counter - finds the length of the string l
 * @str: the string
 * @l: the length
 * Return: the length
 */
int length_counter(char *str, int l)
{
	if (*str == 0)
	{
		return (l - 1);
	}
	return (length_counter(str + 1, l + 1));
}

/**
 * palindrome - checks if the string palindrome
 * @x: the string
 * @l: the length
 * Return: 1 if palindrome
 */
int palindrome(char *x, int l)
{
	if (*x == 0)
	{
		return (1);
	}
	else if (*x != *(x + l))
	{
		return (0);
	}
	return (palindrome(x + 1, l - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = length_counter(s, 0);
	return (palindrome(s, l));
}
