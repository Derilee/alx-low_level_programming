#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	char i  = '0';
	while(i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			i++;
		}
		else
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
