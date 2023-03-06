#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int k;
	int m;

	for (k = 0; k < 8; k++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[k][m]);
		_putchar('\n');
	}
}
