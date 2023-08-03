#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: first
 * @s2: second
 * @n: length of second
 *
 * Return: Pointer or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i = 0, j = 0;
	char *concated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	if (n < len2)
	{
		len2 = n;
	}
	concated = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concated == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		concated[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		concated[i] = s2[j];
		i++;
		j++;
	}
	concated[i] = '\0';
	return (concated);
}
