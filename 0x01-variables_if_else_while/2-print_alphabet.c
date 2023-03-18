#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always (0) Success
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		if (i != 'z')
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
