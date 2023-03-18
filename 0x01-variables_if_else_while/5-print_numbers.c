#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Suceess
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
	{
	if (a < 10)
	{
		printf(" %d", a);
	}
	else
	{
		printf("\n");
	}
	}
	return (0);
}
