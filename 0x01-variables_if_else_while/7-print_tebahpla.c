#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	char c = 'z';

		while (c >= 'a')
		{
			putchar(c);

			if (c != 'a')
			{
				c--;
			}
			else
			{
				break;
			}
		}
	putchar('\n');
	return (0);
}
