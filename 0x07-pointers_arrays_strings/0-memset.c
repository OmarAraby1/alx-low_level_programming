#include "main.h"

/**
 * _memset() - fills memory with a constant byte
 * @s: address of memory
 * @b: the value or byte
 * @n: number of bytes to be filled
 * Return: changed array using s pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *st = s;

	for (i = 0; i < n; i++)
	{
	       *s++ = b;
	}
	return (st);
}
