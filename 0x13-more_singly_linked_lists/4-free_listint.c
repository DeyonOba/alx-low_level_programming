#include "lists.h"

/**
 * free_listint - Free up a linked list
 *
 * @head: Head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
}
