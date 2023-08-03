#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory
 * Return: pointer to the memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
