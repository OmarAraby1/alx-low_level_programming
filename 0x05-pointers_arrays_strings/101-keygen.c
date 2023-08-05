#include "main.h"
#include <time.h>

/**
 * main - generate random valid passwords
 * Return: 0 success
 */

int main(void)
{
	int pass[20];
	int i, sum, n;

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 20; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		_putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			_putchar(n + '0');
			break;
		}
	}
	return (0);
}
