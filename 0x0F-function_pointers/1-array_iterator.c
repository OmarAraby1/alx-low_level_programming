#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: input of elements
 * @size: size of the array
 * @action: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
