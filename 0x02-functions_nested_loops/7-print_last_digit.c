#include "main.h"
/**
 * print_last_digit - function name
 * @i: variable
 * Return: Always (0) Success
 */
int print_last_digit(int i)
{
	if (i % 10)
	{
		_putchar(i);
		return (i);
	}
	return (0);
}
