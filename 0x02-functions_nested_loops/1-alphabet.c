#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always(c) Success
 */
int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (c);
}
