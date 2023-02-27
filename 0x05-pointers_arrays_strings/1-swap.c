#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @b: integer to swap
 * @c: integer to swap
 */

void swap_int(int *b, int *c)
{
	int x;

	x = *b;
	*b = *c;
	*c = x;
}
