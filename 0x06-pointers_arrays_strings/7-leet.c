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
	char main[] = "aAeEoOtTlL";
	char code[] = "4433007711";

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
