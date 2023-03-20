#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 100)
	{
		while (b < 100)
		{
		putchar((a/10) + '0');
		putchar((a%10) + '0');
		putchar(',');
		putchar(' ');
		putchar((b/10) + '0');
		putchar((b%10) + '0');
		putchar(',');
		putchar(' ');
		b++;
		}
		a++;
	
	}
	putchar('\n');
	return (0);
}
