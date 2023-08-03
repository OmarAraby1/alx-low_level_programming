#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to string to be printed
 * @n: length of input
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(num, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(num);
	printf("\n");
}
