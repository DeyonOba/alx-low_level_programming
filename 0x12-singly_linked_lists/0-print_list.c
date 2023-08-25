#include <stddef.h>
#include "lists.h"

/**
 * print_list - Gets the number of element in a linked list
 *
 * @h: pointer to the head of the link list
 * Return: The number of element in the linked list\
 */
size_t print_list(const list_t *h)
{
	size_t num_elem = 0;
	
	while (h != NULL)
	{
		num_elem++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
			printf("[%i] %s", h->len, h->str);
		}
		h = h->next;
	}
	return (num_elem);
}
