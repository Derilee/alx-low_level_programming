#include "main.h"
/**
 * print_last_digit - function name
 * @i: variable
 * Return: Always (0) Success
 */
int print_last_digit(int i)
{
	int n = i % 10;
	if (n < 0)
	{
	_putchar(n + '0');
	}
	if (i < 0)
	{
		return (n);
	}
	return (n);
}
