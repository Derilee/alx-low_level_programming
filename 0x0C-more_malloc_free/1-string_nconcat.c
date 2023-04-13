#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function to allocate memory
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: a pointer that points to a newly alllocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = 0, j = 0, str1 = 0, str2 = 0;

	while (s1 && s1[str1])
		str1++;
	while (s2 && s2[str2])
		str2++;
	if (n < str2)
		concat = malloc(sizeof(char) * (str1 + n + 1));
	else
		concat = malloc
			(sizeof(char) * (str1 + str2 + 1));
	if (!concat)
		return (NULL);
	while (i < str1)
	{
		concat[1] = s1[i];
		i++;
	}
	while (n < str2 && i < (str1 + n))
	{
		concat[i++] = s2[j++];
	}
	while (n >= str2 && i < (str1 + str2))
	{
		concat[i++] = s2[j++];
	}
	concat[i] = '\0';
	return (concat);
}
