#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int k;

for (k = 97; k < 123; k++)
{
	if (k != 101 && k != 113)
	{
	putchar(k);
	}
}
putchar('\n');
return (0);
}
