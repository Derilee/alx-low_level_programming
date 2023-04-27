#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function to Free a list_t list.
 * @head: A pointer to the list_t.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		head = tmp;
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
