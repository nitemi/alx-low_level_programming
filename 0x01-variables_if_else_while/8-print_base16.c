#include <stdio.h>

/**
*  main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int u;
int v;

for (u = 48; u <= 57; u++)
{
	putchar(u);
}
for (v = 97; v <= 102; v++)
{
	putchar(v);
}
putchar('\n');
return (0);
}
