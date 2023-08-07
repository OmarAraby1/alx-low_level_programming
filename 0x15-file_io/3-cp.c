#include "main.h"
/**
 * err_out - prints error messegs if there
 * @f_to: file we copy into
 * @f_from: file we copy from
 * Return: none
 */
void err_out(int f_from, int f_to, char **argv)
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: number of elements of input
 * @argv: list of input elements
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int f_to, f_from, err;
	ssize_t nbytes = 1024;
	ssize_t new_f;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLT | O_TRUNC | O_APPEND, 0664);
	err_out(f_from, f_to, argv);
	while (nbytes = 1024)
	{
		nbytes = read(f_from, buffer, 1024);
		if (nbytes == -1)
		{
			err_out(-1, 0, argv);
		}
		new_f = write(f_to, buffer, nbytes);
		if (new_f == -1)
		{
			err_out(0, -1, argv);
		}
	}
	err = close(f_From);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	err = close(f_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
