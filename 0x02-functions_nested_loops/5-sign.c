#include "main.h"
/**
 * print_sign - The function name
 * @n: The variable declared
 * Return: Always(0) Success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
