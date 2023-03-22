#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 *c - Entry point
 * Return: ALways(0) Success
 */
int _islower(int c)
{
/*	while (c >= 'a' && c <= 'z')
	{*/
	if (c >= 'a' && c <= 'z')
	{
		_putchar(_islower(c));
		return (1);
	}
		else
		{
			return (0);
		}
	/*	c++;
	}*/
		return (0);
}
