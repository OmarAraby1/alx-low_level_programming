#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: length of input
 * @argv: array of input
 * Return: no return
 */
int main(int argc, char **argv)
{
	char *str1, *str2;
	int i = 0, len1, len2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	str1 = argv[1];
	str2 = argv[2];
	while (str1[i])
	{
		if (str1[i] < '0' || str1[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		len1++;
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (str2[i] < '0' || str2[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		len2++;
		i++;
	}
	result = malloc(sizeof(*result) * (len1 + len2 + 1));
	if (result == NULL)
	{
		return (1);
	}
}
