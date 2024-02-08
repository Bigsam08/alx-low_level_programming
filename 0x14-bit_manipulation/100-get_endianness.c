#include "main.h"

/**
 * get_endianness - checks if little or big endianness
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	int p = 2;

	if (p & 1)
		return (0);
	else
		return (1);
}
