#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: name of the file :p
 * @letters: amont of letters to print
 * Return: letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t, o = 0, r = 0, w = 0;
	char *f;

	f = malloc(letters);
	if (!f)
		return (0);

	o = fopen(filename, "r");

	r = read(o, f, letters);
	w = write(STDOUT_FILENO, f, r);

	if (r != w || o== -1 || r == -1 || w == -1)
		return (0);

	free(f);
	close(fp);
	return (w);
}
