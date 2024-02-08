#include "main.h"

/**
 * set_bit - sets to index 0
 * @n: pointer number
 * @index: starting at 0
 *
 * Return: 1 for success or  -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
