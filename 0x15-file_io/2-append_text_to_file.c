#include "main.h"

/**
 * append_text_to_file - ....
 * @filename: ...
 * @text_content: ...
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nm, rwr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (rwr = 0; text_content[rwr];)
			rwr++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	nm = write(fd, text_content, rwr);

	if (fd == -1 || nm == -1)
		return (-1);

	close(fd);

	return (1);
}
