#include "main.h"

/**
 * rev_string - reverse string
 * @s: strinmg
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1];
		s[i-- - 1] = temp;
	}
}
