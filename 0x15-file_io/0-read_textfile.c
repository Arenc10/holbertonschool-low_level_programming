#include "main.h"
/**
 * read_textfile - Function that readsa a text file and prints it to the posix
 * @filename: Pointer to char
 * @letters: Second operand
 * Return:Return 0 or Success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *txt = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (txt == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	rd = read(fd, txt, letters);
	if (fd == -1 || rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, txt, rd);
	if (wr == -1)
		return (0);
	free(txt);
	close(fd);
	return (rd);
}
