#include "main.h"

/**
 * cap_string - capitalize all words of string
 * @s: string input
 * Return: pointer to resutl
 */

char *cap_string(char *s)
{
	int i, j;
	char seperator[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		for (j = 0; seperator[j] != '\0'; j++)
		{
			if (s[i] == seperator[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
