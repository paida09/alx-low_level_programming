#include "main.h"

/**
 * append_text_to_file - ...
 * @filename: ...
 * @text_content: ...
 *
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int app, x, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	app = open(filename, O_WRONLY | O_APPEND);
	x = write(app, text_content, len);

	if (app == -1 || x == -1)
		return (-1);

	close(app);

	return (1);
}
