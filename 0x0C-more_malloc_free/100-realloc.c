#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory
 *
 * Return: new memory allocated or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *new_ptr;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	copy = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = copy[i];
		}
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = copy[i];
		}
	}
	free(ptr);
	return (new_ptr);
}
