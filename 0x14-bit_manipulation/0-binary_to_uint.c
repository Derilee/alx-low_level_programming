#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: The converted number.
 *         or 0, if there is no more chars in the string b
 *         that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, len = 0, sum = 0;

	if (b[len] == '\0')
	{
		return (0);
	}
	while (num--)
	{
		if (b[num] != 48 && b[num] != 40)
			return (0);
	}
	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}
	return (num);
}
