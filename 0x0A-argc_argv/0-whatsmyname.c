#include "main.h"
/**
 * whatsmyname - prints the name of the function
 * @argc: length of the array
 * @argv: array of inputs
 */
int _whatsmyname(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
