#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 *
 * @h: head pointer
 * Return: The number of elements in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		elem += 1;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elem);
}
