#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: printed between the strings
 * @n: length of inputs
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list inp;

	va_start(inp, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(inp, char*);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(inp);
	printf("\n");
}
