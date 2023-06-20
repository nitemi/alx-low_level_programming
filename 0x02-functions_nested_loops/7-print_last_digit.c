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

	l = n % 10;
	if (l < 10)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
