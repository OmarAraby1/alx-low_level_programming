#include "main.h"
/**
 * _sizes - finds the string length
 * @s: input string
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the result or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concated;
	int size1, size2, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _sizes(s1);
	size2 = _sizes(s2);
	concated = malloc(sizeof(char) * (size1 + size2 + 1));
	if (concated == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concated[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concated[size1 + j] = s2[j];
	}
	concated[size1 + size2] = '\0';
	return (concated);
}
