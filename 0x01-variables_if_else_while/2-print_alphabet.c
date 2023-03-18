#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always (0) Success
 */
int main(void)
{
	char i;

	while (i = 'a')
	{
		while (i <= 'z')
		{
		putchar(i);
		i++;
		}
		putchar('\n');
		break;
	}
	return (0);
}
