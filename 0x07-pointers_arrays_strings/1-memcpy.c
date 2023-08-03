#include "main.h"
/**
 * _memcpy - copies memory area
 * @n: number of copied bytes
 * @src: memory area source
 * @dest: memory area destination
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
