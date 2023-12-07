#include "lists.h"

/**
 * add_dnodeint - Add node at the begining of double linked list
 *
 * @head: Head node
 * @n: Integer value to be added to the node
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	new->next = *head;
	*head = new;

	return (new);
}
