#include "main.h"

/**
 * get_bit - returns the bit decimal value at index or error if negative
 * @n: searching number
 * @index: bit index starting at zero
 *
 * Return: Bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1;
	return (value);
	if (index > 63)
		return (-1);
}
