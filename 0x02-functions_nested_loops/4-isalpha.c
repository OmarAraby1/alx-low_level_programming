#include "main.h"

/**
 * _isalpha - check if variable is alpha
 * @c: variable to be checked
 * Return: 1 if alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
