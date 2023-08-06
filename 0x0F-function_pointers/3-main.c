#include "function_pointers.h"
#include "3-calc.h"
/**
 * main - Prints the result of simple operations
 * it uses get_op_func to get the function from op_func
 * @argc: number of arguments passed
 * @argv: list of the arguments
 * Return: the result
 */
int main(int argc, char **argv)
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
