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
	int c = 0;
	int d = 0;

	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				d = c + 1;
				while (d <= 9)
				{
					if (a != b && b != c && c != d && a != c && a != d && b != d)
					{
						putchar(a + '0');
							putchar(b + '0');
							putchar(c + '0');
							putchar(d + '0');
					}
					if ( a + b + c + d < 99)
					{
							putchar(',');
							putchar(' ');
					}
							d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
