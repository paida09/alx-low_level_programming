#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- ...
 * @filename: ...
 * @letters: ...
 * Return: 0 when function fails or filename is NULL.
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *new;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	new = malloc(sizeof(char) * letters);
	y = read(fd, new, letters);
	x = write(STDOUT_FILENO, new, y);

	free(new);
	close(fd);
	return (x);
}
