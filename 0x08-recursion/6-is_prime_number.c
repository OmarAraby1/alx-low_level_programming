#include "main.h"
/**
 * primal - chaeck for primality
 * @x: input to be checked
 * @y: counter
 * Return: 1 if prime, 0 otherwise
 */
int primal(int x, int y)
{
	if (y = 1)
	{
		return (1);
	}
	if (x % y != 0)
	{
		return (primal(x, y - 1));
	}
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: input number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int a = n;
	return (primal(n, a - 1));
}	
