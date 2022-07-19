#include "main.h"

/**
 * append_text_to_file - append text to end of file
 * @filename: name of file :p
 * @text_content: new content
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, slen;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY, O_APPEND);
	if (!text_content)
		return (1)
	slen = strlen(text_content);
	if (write(fd, &text_content[i], slen) < 0)
		return (-1);
	close(fd);
	return (1);
}
