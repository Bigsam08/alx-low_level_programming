#include "main.h"

/**
 * print_line - function that draws a straight line in the term
 * @n: input number
 * Return: straight line
 */

void print_line(int n)
{
int ba;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (ba = 1; ba <= n; ba++)
{
_putchar('_');
}
_putchar('\n');
}
}
