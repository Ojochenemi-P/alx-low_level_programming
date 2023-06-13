#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file print to STDOUT.
 * @filename: The text file being read.
 * @letters: The number of letters to be read.
 * Return: w- actual number of bytes read and printed.
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t k;
	ssize_t j;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	j = read(fd, buf, letters);
	k = write(STDOUT_FILENO, buf, j);

	free(buf);
	close(fd);
	return (k);
}
