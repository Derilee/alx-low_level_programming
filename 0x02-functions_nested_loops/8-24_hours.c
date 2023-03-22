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
			_putchar(j);
		j++;
		}
		_putchar(i);
		i++;
	}
	return (0);
}
