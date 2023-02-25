#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, za;

	n = 612852475143;
	for (za = 2; za <= n; za++)
	{
		if (n % za == 0)
		{
			n /= za;
			za--;
		}
	}
	printf("%ld\n", za);
	return (0);
}
