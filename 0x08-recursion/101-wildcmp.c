#include "main.h"
/**
 * strlen_Xwildc - function that returns the length of a string,
 *			ignoring wildcard characters.
 * @str: The string to be measured.
 * Return: the length of a string
 */
int strlen_Xwildc(char *str)
{
	int len = 0, i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			len++;

		i++;
		len += strlen_Xwildc(str + i);
	}
	return (len);
}

/**
 * non_wildc - a function that iterates through a string located at
 *		a wildcard, until it points to a non-wildcard character.
 * @str: The string to be iterated through.
 */
void non_wildc(char **str)
{
	if (**str == '*')
	{
		(*str)++;
	}
		non_wildc(str);
}

/**
 * str_match - function to check if a string matches another
 *		string containing wildcards.
 * @str: The string to be matched.
 * @poten_c: The variable
 * Return: a pointer to the null byte if str and poten_c are identical.
 *         or a pointer to the first unmatched character
 */
char *str_match(char *str, char *poten_c)
{
	int len = strlen_Xwildc(str) - 1;
	int poten_c_len = strlen_Xwildc(poten_c) - 1;

	if (*poten_c == '*')
		non_wildc(&poten_c);

	if (*(str + len - poten_c_len) == *poten_c && *poten_c != '\0')
	{
		poten_c++;
		return (str_match(str, poten_c));
	}
	return (poten_c);
}

/**
 * wildcmp - function that compares two strings,
 *		considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		non_wildc(&s2);
		s2 = str_match(s1, s2);
	}
	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
