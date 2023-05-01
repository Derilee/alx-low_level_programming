#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer
 * @n: The integer for the new node
 * Return: The address of the new element
 *         or NULL, if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new_node;
	}
	return (*head);
}
