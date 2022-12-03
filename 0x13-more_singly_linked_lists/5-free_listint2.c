#include "lists.h"

/**
 * free_listint2 - start
 * @head: parameter
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *n;

	if (head != NULL)
	{
		n = *head;

		while ((temp = n) != NULL)
		{
			n = n->next;
			free(temp);
		}
		head = NULL;
	}
}
