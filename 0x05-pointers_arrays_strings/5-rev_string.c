#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int w;
	int d;
	char m;

	for (w = 0; s[w] != '\0'; w++)
	{
	}
	w--;
	for (d = 0; d < w; d++, w--)
	{
		m = *(s + w);
		*(s + w) = *(s + d);
		*(s + d) = m;
	}
}
