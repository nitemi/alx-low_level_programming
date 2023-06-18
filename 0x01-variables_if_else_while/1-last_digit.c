#include <stdio.h>

/**
* main -Print the last digit of randomly generated number
* and whether it is greater than 5, less than 6, or 0
*
* Return: Always 0 (success)
*/
	int main(void)
{
	int n;

	if ((n % 10) > 5)
	{
	printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if
		((n % 10) < 6)&&(n % 10) != 10)
	{
	printf("last digit of %d is %d and is less than 6 and not o\n", n, n % 10);
	}
	else
	{
	printf("last digit of %d is 0\n", n, n % 10);
	}
	return (0);
}
