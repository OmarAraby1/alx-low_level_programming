#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string used
 * @c: character to be located
 * Return: first occurance of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; i <= (sizeof(s) / sizeof(char)); i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
