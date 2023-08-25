#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add new nodes to linked list
 *
 * @head: pointer to a pointer of the head link
 * @str: string characters
 * Return: pointer to the previous node
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t n;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	n = strlen(str);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = n;
	new->next = *head;

	*head = new;
	return (*head);
}
