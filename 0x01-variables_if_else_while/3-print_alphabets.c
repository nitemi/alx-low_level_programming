#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int x;
int y;

x = 97;
y = 65;
while (x <= 122)
{
	putchar(x);
	x++;
}
while (y <= 90)
{
	putchar(y);
	y++;
}
putchar('\n');
return (0);
}
