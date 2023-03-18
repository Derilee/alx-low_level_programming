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
		putchar ("%c", i, 26);
			i++;
	}
	return (0);
}
