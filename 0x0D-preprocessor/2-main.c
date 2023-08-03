#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - print the name of the file
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
