#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: least
 * @max: last
 *
 * Return: pointer to the created array or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
