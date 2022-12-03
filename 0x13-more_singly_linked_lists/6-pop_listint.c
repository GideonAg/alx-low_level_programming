#include "lists.h"

/**
 * pop_listint - start
 * @head: parameter
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *n;

	if (*head == NULL)
		return (0);

	n = *head;
	head_node = n->n;
	h = n->next;

	free(n);
	*head = h;

	return (head_node);
}
