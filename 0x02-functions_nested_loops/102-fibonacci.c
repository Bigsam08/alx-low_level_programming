#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: Nothing!
 */

int main(void)
{
	int p = 0;
	long n = 1, m = 2;

	while (p < 50)
	{
		if (p == 0)
			printf("%ld", n);
		else if (p == 1)
			printf(", %ld", m);
		else
		{
			m += n;
			n = m - n;
			printf(", %ld", m);
		}

		++p;
	}

	printf("\n");
	return (0);
}
