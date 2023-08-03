#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of coming inputs
 *
 * Return: the sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, k = 0;
	va_list p;

	va_start(p, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		k += va_arg(p, int);
	}
	va_end(p);
	return (k);
}
