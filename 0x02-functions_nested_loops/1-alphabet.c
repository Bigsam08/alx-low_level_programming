#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char bm;

	bm = 'a';


	while (bm <= 'z')
	{
		_putchar(bm);
		bm++;
	}

	_putchar('\n');
}
