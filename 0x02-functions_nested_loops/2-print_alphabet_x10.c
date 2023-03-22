#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always (0) Success;
 */
int print_alphabet_x10(void)
{
	int i = 'a';
		while (i <= 'z')
		{
			if ((i == 'z'))
			{
				_putchar(i * 10);
				_putchar('\n');
			}
			else
			{
				break;
			}
			i++;
		}
	return (i);
}


