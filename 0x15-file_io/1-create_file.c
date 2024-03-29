#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to name
 * @text_content: pointer to the content NULL terminated
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, file;

	if (!filename)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (i = 0; text_content[i]; i++)
	{
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	write(file, text_content, i);
	close(file);
	return (1);
}
