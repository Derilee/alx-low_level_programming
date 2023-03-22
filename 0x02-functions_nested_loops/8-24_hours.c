#include "main.h"
/**
 * jack_bauer - function name
 * Return: Always (0) Success
 */
int jack_bauer(void)
{
	int h = 0;
	int s;

	while (h < 24)
	{
		s = 0;
		while (s < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		s++;
		}
		h++;
	}
	return (0);
}
