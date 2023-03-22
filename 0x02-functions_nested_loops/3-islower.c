#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *c - Entry point
 * Return: ALways(0) Success
 */
int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	if (_islower(c))
	{
		_putchar(1);
	}
		else
		{
			_putchar (0);
		}
		return (0);
}
