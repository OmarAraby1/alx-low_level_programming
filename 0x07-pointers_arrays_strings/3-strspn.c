#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: source of bytes
 * Return: number of bytes in s only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0;
	int count = 0;

	while (*s)
	{
		for (; accept[j]; j++)
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
