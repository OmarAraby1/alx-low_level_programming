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
	int i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
