#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: Pointer to created filename.
 * @text_content: String pointer to write to the file.
 * Return: 1 for Success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int pt;
	int lenght;
	int wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	pt = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (pt == -1)
		return (-1);
	lenght = strlen(text_content);
	if (text_content != NULL)
	wr = write(pt, text_content, lenght);
	if (wr == -1)
		return (-1);
	close(pt);
	return (1);
}
