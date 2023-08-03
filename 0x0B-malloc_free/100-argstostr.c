#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: length of input
 * @av: array of string inputs
 *
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int j, i = 0;
	int k = 0;
	int len = 0;
	char *concated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len += 1;
		}
		len += 1;
		i += 1;
	}
	len++;
	concated = malloc(sizeof(char) * len);
	if (concated == NULL)
	{
		free(concated);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concated[k] = av[i][j];
			k += 1;
		}
		concated[k] = '\n';
		k += 1;
	}
	concated[k] = '\0';
	return (concated);
}
