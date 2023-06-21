#include "main.h"

/**
 * print_sign - checks for integer sign
 * @n: the integer to be checked
 *
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int l;

	if (n < 0)
		n = -n;

			l = n % 10;

if (l < 0)
l = -l;

	_putchar(l + '0');
	return (l);
}
