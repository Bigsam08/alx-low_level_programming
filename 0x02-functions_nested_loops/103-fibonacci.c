#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 *
 * Return: Nothing!
 */

int main(void)
{
	int a = 0;
	long x = 1, y = 2, sum = y;

	while (y + x < 4000000)
	{
		y += x;

		if (y % 2 == 0)
			sum += y;

		x = y - x;

		++a;
	}

	printf("%ld\n", sum);
	return (0);
}
