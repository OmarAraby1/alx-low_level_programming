#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array of elements
 * @size: size in bytes of each element
 *
 * Return: NULL if failed, else just allocate
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *x;
	char mem = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = malloc(size * nmemb);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		x[i] = mem;
	}
	return (x);
}
