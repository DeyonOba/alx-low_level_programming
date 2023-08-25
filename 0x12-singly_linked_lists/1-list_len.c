#include "lists.h"

/**
 * list_len - get the number of elements in a linked list
 *
 * @h: pointer to the head of the linked list
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		num_elem += 1;
		h = h->next;
	}
	return (num_elem);
}
