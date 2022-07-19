#include "main.h"

/**
 * read_textfile - read a text file
 * @filename: name of the file :p
 * @letters: amont of letters to print
 * Return: letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *p;
	char c;
	ssize_t counter = 0;
	ssize_t l = letters;

	if (!filename)
		return (0);
	p = fopen(filename, "r");

	if (!p)
		return (0);
	while (!feof(p) && l > counter)
	{
		if (c > 126)
			continue;
		c = getc(p);
		putchar(c);
		counter++;
	}
	fclose(p);

	return (counter);
}
