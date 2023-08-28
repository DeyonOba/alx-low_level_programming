#include "lists.h"

/**
 * listint_len - Counts the number of  elements of a listint_t list
 *
 * @h: head pointer
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem += 1;
		h = h->next;
	}
	return (elem);
}
