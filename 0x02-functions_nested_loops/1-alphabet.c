#include "main.h"

/**
 * 1-alphabet.c-prints the alphabet, in lowercase
 * Return: Always 0
*/
int void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
