#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: substring input
 * @haystack: reference string
 * Return: pointer to the begining of the lacted
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;
		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
