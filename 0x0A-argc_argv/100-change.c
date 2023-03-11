#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++d;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}
/**
 * main - prints the minimum number of coins to make change
 * @argc: length of inputs
 * @argv: array of inputs
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int x, ind;
	int sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = _atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
	}
	sum += x / 25;
	ind = x % 25;
	sum += ind / 10;
	ind = ind % 10;
	sum += ind / 5;
	ind = ind % 5;
	sum += ind / 2;
	ind = ind % 2;
	sum += ind / 1;
	printf("%d\n", sum);
	return (0);
}
