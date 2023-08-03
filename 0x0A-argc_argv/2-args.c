#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: nubmer of arguments
 * @argv: array of input arguments
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
