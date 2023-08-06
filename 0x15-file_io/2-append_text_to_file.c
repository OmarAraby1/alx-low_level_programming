#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name
 * @text_content: to be appended
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	write(file, text_content, i);
	return (1);
}
