#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Return: Always (0) success
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		if (c >= 'a' && c <= 'z')
		{
		return(1);
	}
	}
	else
	{
		return (0);
	}
	return (0);
}
