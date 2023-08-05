#include "main.h"

/**
 * _strncat - limited concatination
 * @dest: concat to this
 * @src: concat from this
 * @n: number of chars to concat
 * Return: pointer to result
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
