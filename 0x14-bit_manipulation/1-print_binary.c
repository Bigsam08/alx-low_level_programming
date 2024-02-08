#include "main.h"
/**
 * print_binary - prints decimal number to equivalent binary number
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int first;
	int read, lp;

	for (lp = 63; lp >= 0; lp--)
	{
		first = n >> lp;
		if (first & 1)
		{
			_putchar('1');
			read++;
		}
		else if (!read)
			_putchar('0');
	}
	if (read)
		_putchar('0');
}
