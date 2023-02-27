#include "main.h"

/**
 * puts2 - Entry point
 * @str: pointer
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int r;

	for (r = 0 ; str[r] != '\0' ; r++)
	{
		if (r % 2 == 0)
		{
			_putchar(str[r]);
		}
	}
	_putchar('\n');
}
