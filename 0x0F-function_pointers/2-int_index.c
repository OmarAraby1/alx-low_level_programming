#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: input of elements
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: the index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);
		if (x != 0)
		{
			return (i);
		}
	}
	return (-1);
}
