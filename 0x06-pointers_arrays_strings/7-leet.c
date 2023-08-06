#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: string
 * Return: pointer to result
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char main[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int code[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	for (i; s[i] != '\0'; i++)
	{
		for (j; j < 10; j++)
		{
			if (s[i] = main[j])
			{
				s[i] = code[j];
			}
		}
	}
	return (s);
}
