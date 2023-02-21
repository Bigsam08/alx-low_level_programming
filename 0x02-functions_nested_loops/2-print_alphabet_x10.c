#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int game = 0;
	char bm;

	while (game++ <= 9)
	{
		for (bm = 'a'; bm <= 'z'; bm++)
			_putchar(bm);
		_putchar('\n');
	}
}
