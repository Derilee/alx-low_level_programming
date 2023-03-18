#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		if (c != 'z')
		{
			c++;
		}
		else
		{
			break;
		}
	}
	while (b <= 'Z')
	{
		putchar(b);
		if (b != 'Z')
		{
			b++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
