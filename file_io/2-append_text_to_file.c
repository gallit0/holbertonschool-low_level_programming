#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file :p
 * @text_content: new content
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, 'w');
	for (i = 0; text_content && text_content[i]; i++)
	{
		if (write(fd, &text_content[i], 1) < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
