#include "lists.h"

/**
 * free_listint2 - Free up a linked list and set head to NULL
 *
 * @head: Head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;
		free(temp);
	}
	free(current);
	*head = NULL;
}
