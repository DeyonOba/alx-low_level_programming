#include "lists.h"

/**
 * dlistint_len - Prints all the elements of a dlistint_t list
 *
 * @h: Head node structure for a doubly linked list
 * Return: Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n += 1;
		h = h->next;
	}

	return (n);
}
