#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a linked list
 *
 * @head: pointer to the current head of the linked list
 * @n: integer
 * Return: pointer to the new node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		/* if memory allocation fails*/
		free(new_node);
		return (NULL);
	}
	/* store data of the new node*/
	new_node->n = n;
	new_node->next = NULL;

	/* if head is a NULL pointer*/
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}

