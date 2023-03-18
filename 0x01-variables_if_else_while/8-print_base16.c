#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	int i = 0;
	char c = 'a';

	while (i <= 9)
	{
		putchar(i, '0');
	if (i != 9)
	{
		i++;
	}
	else{
		break;
	}
	}
	while (c <= 'f')
	{
		putchar(c);
		if (c != 'f')
		{
			c++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
