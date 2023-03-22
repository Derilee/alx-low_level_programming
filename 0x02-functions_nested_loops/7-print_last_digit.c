#include "main.h"
/**
 * print_last_digit - function name
 * @i: variable
 * Return: Always (0) Success
 */
int print_last_digit(int i)
{
	
	int r = i % 10;
	if (r != 0)
	{
	return (i % 10);
	}
	else
	{
		return (0);
	}
}
