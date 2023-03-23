#include "main.h"
/**
 * print_line - function name
 * @n: variable name
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
