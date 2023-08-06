#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: the string
 * Return: pointer to result
 */

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char orig[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (; j < 52; j++)
		{
			if (s[i] == orig[j])
			{
				s[i] = code[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
