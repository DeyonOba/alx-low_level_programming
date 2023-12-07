#include "lists.h"

/**
 * add_dnodeint_end - Add node to the end of the list
 *
 * @head: Node pointing to the begining of the list
 * @n: Integer value to be add to the new node
 * Return: Address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;


	/* Current node would be used to traverse the list*/
	current = *head;

	new = malloc(sizeof(dlistint_t));
	/* When memory allocation fails*/
	if (new == NULL)
		return (NULL);

	/* Assign value to the new node*/
	new->n = n;
	new->next = NULL;

	/* if the list is empty, let the node be the head*/
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	/* if list is not empty, traverse the list*/
	while (current->next != NULL)
	{
		current = current->next;
	}

	new->prev = current;
	current->next = new;

	return (new);
}

