#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *
 * @head: pointer to the head address
 * Return: The data n for the head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current = *head;

	if (*head == NULL)
		return (0);

	*head = current->next;
	n = current->n;
	free(current);
	return (n);
}


