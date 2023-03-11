#include "main.h"
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
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
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
