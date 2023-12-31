#include "lists.h"

/**
 * add_nodeint - Add node to the begining of the linked list
 *
 * @head: pointer to the head
 * @n: integer
 * Return: Pointer to the current node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (*head);

}
