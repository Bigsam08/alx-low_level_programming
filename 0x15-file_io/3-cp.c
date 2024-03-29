#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>

/**
 * main - writes a program that copies one file to another
 * @argc: number of argument count
 * @argv: pointer to array of argument passed
 * Return: 0 Always as success
 **/

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int pt, wr, pt2, closePT;
	char buffer[1024];
	ssize_t rd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	pt = open(file_from, O_RDONLY);
	if (pt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	pt2 = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (pt2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((rd = read(pt, buffer, 1024)) > 0)
	{
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		buffer[1024] = '\0';
	}
	if (rd != 0)
	{
		wr = write(pt2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	pt2 = open(file_to, O_WRONLY | O_APPEND);
	closePT = close(pt);
	if (closePT == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pt);
		exit(100);
	}
	if (close(pt2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pt2);
		exit(100);
	}
	return (0);
}

