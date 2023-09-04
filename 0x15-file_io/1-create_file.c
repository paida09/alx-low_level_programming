#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: filename.
 * @text_content: NULL terminated sting.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nm, rwr  = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (rwr = 0; text_content[rwr];)
			rwr++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	nm = write(fd, text_content, rwr);

	if (fd == -1 || nm == -1)
		return (-1);

	close(fd);

	return (1);
}
