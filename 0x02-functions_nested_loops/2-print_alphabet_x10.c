#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always (0);
 */
int print_alphabet_x10(void)
{
	int i = 'a';
		while (i < 'z')
		{
			_putchar(i);
			if ((i == 'z'))
			{
				_putchar(i * 10 + '\n');
			}
			else
			{
				break;
			}
			i++;
		}
	return (i);
}


