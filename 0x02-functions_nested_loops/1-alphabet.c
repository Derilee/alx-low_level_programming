#include "main.h"
/**
 * main - Entry point
 *
 * Result: Always(0) Success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		if (c != 'z')
		{
		c++;
		}
		else
		{
			break;
		}
		_putchar('\n');
	}
}
int main(void)
{
	print_alphabet();
	return (0);
}
