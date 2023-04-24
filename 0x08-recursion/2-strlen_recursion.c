#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: a string to be used
 * Return: length of the string
 */
int _strlen_recurssion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
