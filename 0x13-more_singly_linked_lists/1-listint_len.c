#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer
 * Return: The number of elements in a listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
