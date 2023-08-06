#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first
 * @m: second
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, count = 0;

	xor = n ^ m;
	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}
	return (count);
}
