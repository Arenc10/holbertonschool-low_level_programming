#include "main.h"
/**
 * append_text_to_file - Function to append a text at the end of a file
 * @filename: First operand
 * @text_content: Second operand
 * Return: 1 on success or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i, length = 0;

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			length++;
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND, 0200;
	if (fd == NULL)
		return (-1);
	wr = write(fd, text_content, length);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
