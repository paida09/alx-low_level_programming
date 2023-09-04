#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and prints letters.
 * @filename: filename
 * @letters: number of letters to print
 * Return: the actual number of letters it could read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, p, q;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	q = read(fd, buf, letters);
	p = write(STDOUT_FILENO, buf, q);

	free(buf);
	close(fd);
	return (p);
}
