#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free dynamically allocated link list memory
 *
 * @head: head pointer
 */
void free_list(list_t *head)
{
	list_t *current, *next_node;

	current = head;

	if (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
