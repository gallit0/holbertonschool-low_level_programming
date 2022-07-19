#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: name of the file :p
 * @letters: amont of letters to print
 * Return: letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *f;

	if (!filename)
		return (0);

	f = malloc(letters);
	if (!f)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(f);
		return (0);
	}
	r = read(fd, f, letters);
	w = write(STDOUT_FILENO, f, r);

	free(f);
	close(fd);
	if (r != w || r == -1 || w == -1)
		return (0);

	return (r);
}
