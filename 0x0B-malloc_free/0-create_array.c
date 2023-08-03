#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the array
 * @c: initializer
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(char) * size);
	if (x == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		x[i] = c;
		i++;
	}
	x[i] = '\0';
	return (x);
}
