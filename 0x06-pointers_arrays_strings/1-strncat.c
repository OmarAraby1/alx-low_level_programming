#include "main.h"

/**
 * _strncat - limited concatination
 * @dest: concat to this
 * @src: concat from this
 * Return: pointer to result
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, i, j;

	len1 = 0;
	j = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	i = len1;
	while (i < len1 + n)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		break;
	}
	dest[i] = '\0';
	return (dest);
}
