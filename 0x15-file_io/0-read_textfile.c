#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text and print it to STDOUT.
 * @filename: name of file
 * @letters: number of letters to be read
 * Return: (wr) actual number read and printed
 * 0 filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wr;
	ssize_t rd;
	ssize_t pt;
	char *buffer;

	pt = open(filename, O_RDONLY);
	if (pt == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(pt, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	close(pt);
	return (wr);
}
