#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
        int i = 0;
        int n = 0;
        int signo = 1;

        while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
        {
                if (s[i] == '-')
                {
                        signo *= -1;
                }
                i++;
        }
        while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
        {
                if (n >= 0)
                {
                        n = n * 10 - (s[i] - '0');
                        i++;
                }
                else
                {
                        n = n * 10 - (s[i] - '0');
                        i++;
                }
        }
        signo *= -1;
        return (n * signo);
}
/**
 * main - that adds positive numbers
 * @argc: length of inputs
 * @argv: array of inputs
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;
	int j;

	if (argc == 1)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
