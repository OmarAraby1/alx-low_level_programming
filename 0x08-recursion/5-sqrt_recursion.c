#include "main.h"
/**
 * sqrt2 - find square root from b to a
 * @a: equals n
 * @b: counter from 1 to n
 * Return: square root
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
