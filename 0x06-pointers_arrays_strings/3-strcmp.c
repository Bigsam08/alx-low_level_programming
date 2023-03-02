#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int d;

	for (d = 0; s1[d] != '\0' && s2[d] != '\0'; d++)
	{
		if (s1[d] != s2[d])
			return (s1[d] - s2[d]);
	}
	return (0);
}
