#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copy to
 * @src: copy from
 * @n: limit
 * Return: pointer to result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0' && j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j - 1] = '\0';
	return (dest);
}
