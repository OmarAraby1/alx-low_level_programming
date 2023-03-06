#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: source of bytes
 * Return: number of bytes in s only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				count++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
