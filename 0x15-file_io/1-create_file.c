#include "main.h"
/**
 * create_file - Function that creates a file
 * @filename: First operand
 * @text_content: Second operand
 * Return: 1 on success or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, i, length = 0;
	
	if (filename == NULL)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		length++;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, length);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
