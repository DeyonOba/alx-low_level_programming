#include "list.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Head node structure for a doubly linked list
 * Return: Number of elements in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h->next != NULL)
	{
		n += 1;
		printf("%d\n", h->n);
		h = h->next;
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			n += 1;
		}
	}

	return (n);
}
