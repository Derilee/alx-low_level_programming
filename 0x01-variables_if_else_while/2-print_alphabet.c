#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always (0) Success
 */
int main(void)
{
	char i[] = "abcdefghijklmnopqrstuvwxyz\n";
	int a = 0;
	while (i[a] != 0)
	{
		putchar(i[a]);
			a++;
	}
	return (0);
}
