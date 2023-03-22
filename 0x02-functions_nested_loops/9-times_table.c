#include "main.h"
/**
 * times_table - function name
 *
 * Return: Always (0) Success
 */
int times_table(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			j++;
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		i++;
		_putchar('\n');
	}
	return (0);
}
