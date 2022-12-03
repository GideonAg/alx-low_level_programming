#include "lists.h"

/**
 * sum_listint - start
 * @head: parameter
 * Return: sum of all the data of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
