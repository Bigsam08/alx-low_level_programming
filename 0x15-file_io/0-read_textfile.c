#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile- Reads text file to  print to STDOUT
 * @filename: name of file
 * @letters: number of letters to be read and print
 * Return: (rd) actual number of letters  read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t pt, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	pt = open(filename, O_RDONLY);
	if (pt == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	rd = read(pt, buffer, letters);
	close(rd);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (rd != wr)
		return (0);

	free(buffer);
	return (rd);
}
