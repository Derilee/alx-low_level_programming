#include "main.h"
/**
 * print_last_digit - function name
 * @i: variable
 * Return: Always (0) Success
 */
int print_last_digit(int i)
{
	int n = i % 10;

	_putchar(n + '0');
	if (n != 0 && n < 0)
	{
		n = -n;
	_putchar(n + '0');
	}
	return (n);
}
