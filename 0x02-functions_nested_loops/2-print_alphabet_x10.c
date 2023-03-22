#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always (0) Success;
 */
int print_alphabet_x10(void)
{
	int i = 'a';
		while (i < 'z')
		{
			_putchar(i);
			if ((i == 'z'))
			{
				_putchar(i * 10);
			}
			else
			{
				break;
			}
			i++;
		}
	return (i);
}


