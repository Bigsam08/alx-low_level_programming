#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int d;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[k] = src[d];
		k++;
		d++;
	}

	dest[k] = '\0';
	return (dest);
}
