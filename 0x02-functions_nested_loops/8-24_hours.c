#include "main.h"
/**
 * jack_bauer - function name
 * @i: variable name
 * Return: Always (0) Success
 */
int jack_bauer(void)
{
	int i = 0;
	int j;
	
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		j++;
		}
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		i++;
	}
	return (0);
}
