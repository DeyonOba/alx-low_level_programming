#include "lists.h"

/**
 * get_nodeint_at_index - Gets data from the nth node
 *
 * @head: Head pointer
 * @index: The nth index
 * Return: Pointer to the nth node, else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count <= index)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
