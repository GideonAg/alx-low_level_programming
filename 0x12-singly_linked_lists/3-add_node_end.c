#include <string.h>
#include "lists.h"

/**
 * add_node_end - start
 * @head: parameter
 * @str: parameter
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *n;
	int len;
	list_t *new;
	list_t *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	n = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = n;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
