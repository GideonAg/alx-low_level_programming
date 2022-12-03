#include "lists.h"

/**
 * listint_len - start
 * @h: parameter
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t = num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
