#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 0;
	int a = 0;

	while (i <= 9)
	{
		a = 1 + i;
		while (a <= 9)
		{
			putchar(i + '0');
			putchar(a + '0');
			putchar(',');
			putchar(' ');
			a++;
			}
		i++;
		}
	putchar('\n');
	return (0);
}
