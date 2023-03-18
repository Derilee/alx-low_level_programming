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
	while(i < 10)
	{
		putchar(i);
		if (i != 10)
		{
			i++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return 0;
}
