#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *b, int *c)
{
	int x;

	x = *b;
	*b = *c;
	*c = x;
}
