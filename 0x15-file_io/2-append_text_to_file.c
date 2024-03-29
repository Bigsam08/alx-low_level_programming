#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Add text at the end of a file.
 * @filename: Pointer name tp the  file.
 * @text_content: String to append
 * Return: -1 if filename is NULL or 1 if text content is NULL
 * or -1 if file do not exit and user has to permission to create.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int pt, wr;

	if (filename == NULL)
		return (-1);
	pt = open(filename, O_WRONLY | O_APPEND);
	if (pt == -1)
		return (-1);
	if (text_content != NULL)
	wr = write(pt, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(pt);
	return (1);

}
