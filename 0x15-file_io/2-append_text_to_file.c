#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: First operand file name
 * @text_content: Second operand
 * Return: Return 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, i, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	wr = write(file, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
