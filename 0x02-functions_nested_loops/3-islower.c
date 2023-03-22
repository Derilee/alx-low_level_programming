#include "main.h"
/**
 * _islower - Entry point
 *
 * c - parameter
 *
 * Return: ALways(0) Success
 */
int _islower(void)
{
	int c = 0;

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
		{
			return (0);
		}
}
