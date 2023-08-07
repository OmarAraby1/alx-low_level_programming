#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to name
 * @letters: number of letters to read
 * Return: num of read letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, lett, wr;
	char *text;

	text = malloc(sizeof(char) * letters);
	if (!filename || !text)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	lett = read(file, text, letters);
	wr = write(STDOUT_FILENO, text, lett);
	free(text);
	close(file);
	return (wr);
}
