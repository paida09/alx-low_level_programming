#include "main.h"

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: -1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int cf, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	cf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(cf, text_content, len);

	if (cf == -1 || x == -1)
		return (-1);

	close(cf);

	return (1);
}
