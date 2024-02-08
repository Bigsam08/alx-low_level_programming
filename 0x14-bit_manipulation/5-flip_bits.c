#include "main.h"

/**
 * flip_bits - returns the number of bits needed  to be  fliped
 * to get to another number
 * @n: initial bits
 * @m: new holder
 * Return: bits number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j, bit_no;

	j = n ^ m;

	for (bit_no = 0; j != 0; bit_no += 1)
		j &= (j - 1);
	return (bit_no);
}
