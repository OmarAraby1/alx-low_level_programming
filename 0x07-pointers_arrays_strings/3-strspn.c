#include "main.h"
/**
 * int _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: source of bytes
 * Return: number of bytes in s only from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int count = 0;
	
	for (; s[i] >= '\0'; i++)
	{
		for (; accept[j] >= '\0'; j++)
		{
			if(accept[j] == s[i])
			{
				count++;
			}
		}
	}
	return (count);
}
