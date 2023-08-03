#include "main.h"
/**
 * _sizes - finds the length of a string
 * @s: the string
 *
 * Return: the length
 */
int _sizes(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: copy it to the memory
 *
 * Return: pointer to the string or NULL
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}
	l = _sizes(str) + 1;
	newstr = malloc(sizeof(char) * l);
	while (i < l)
	{
		if (newstr == NULL)
		{
			return (NULL);
		}
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
