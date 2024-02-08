#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *  @b: pointing to a string number
 *
 *  Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int a;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		value = 2 * value + (b[a] - '0');
	}
	return (value);
}
