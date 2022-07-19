#include "main.h"

/**
 * create_file - script to create file from c
 * @filename: name of the file :p
 * @text_content: content for the file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	for (i = 0; text_content[i]; i++)
	{
		if (write(fd, &text_content[i], 1) < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
