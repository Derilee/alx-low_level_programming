#include "main.h"
/**
 * more_numbers - function name
 * Return: Always(0) Success
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 14)
	{
		j = 0;
		while (j <= 10)
		{
			_putchar(j + '0');
		}
		_putchar(i + '0');
		_putchar('\n');
		i++;
	}
}
