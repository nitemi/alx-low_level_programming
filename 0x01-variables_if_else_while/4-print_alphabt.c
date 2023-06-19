#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int k = 97;

while (k <= 122);
{
	if (k == 101 || k== 113)
	{
		k++;
		continue;
	}
	putchar(k);
	k++;
}
putchar('\n');
return (0);
}
