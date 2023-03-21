#include "main.h"
/**
 * main - Entry point
 *
 * Result: Always(0) Success
 */
int print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	/*	if (c != 'z')
		{
		}
		else
		{
			break;
		}*/
	}
	_putchar('\n');
	return(0);
}
/*int main(void)
{
	print_alphabet();
	return (0);
}
}*/
