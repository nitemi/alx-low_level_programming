#include <stdio.h>

/**
*  main - Entry point
*  Description : prints the alphabet in lowercase, followed by a new line.
* Return: Always 0 (success)
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
