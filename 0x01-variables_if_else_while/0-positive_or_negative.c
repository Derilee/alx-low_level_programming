#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int n = 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	elseif(n = 0)
	{
		printf("is zero\n");
	}
	elseif(n < 0)
	{
		printf("is negative\n");
	}
return (0);
}
