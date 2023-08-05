#include "main.h"

/**
 * string_toupper - changle all lower case to upper
 * @s: string
 * Return: pointer to result
 */

char *string_toupper(char *s)
{
	int i = 0;

	for(; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
