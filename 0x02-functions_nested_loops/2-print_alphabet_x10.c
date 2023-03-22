#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always (0) Success;
 */
int print_alphabet_x10(void)
{
	char c = 'a';
	int a = 0;
	int b;
	while (a < 10)
	{
		b = 0;
		while(b < 26)
		{
			_putchar(c);
			c++;
			b++;
		}
		a++;
		_putchar('\n');
		c = 'a';
	}
	return (0);
}


