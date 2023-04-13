#include "main.h"
/**
 * malloc_checked - a function to allocate memory
 * @b: variable name
 * Return: Always a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
