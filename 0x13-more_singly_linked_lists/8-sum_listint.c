#include "lists.h"

/**
 * sum_listint - Sum of all data (n) of a listint_t linked list
 *
 * @head: head pointer
 * Return: Sum of data n in nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
