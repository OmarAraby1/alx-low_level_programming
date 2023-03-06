#include "main.h"

/**
 * *_memset() - fills memory with a constant byte
 * @s: pointer to has memory value
 * @b: constant value add
 * @n: number of changed values
 *
 * Return: changed s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
