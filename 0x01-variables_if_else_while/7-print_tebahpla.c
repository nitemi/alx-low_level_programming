#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int n = 122;

while (n >= 9)
{
	putchar(n);
	n--;
}
putchar('\n');
return (0);
}
