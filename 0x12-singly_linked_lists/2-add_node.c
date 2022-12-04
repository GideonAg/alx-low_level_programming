#include <string.h>
#include "lists.h"

/**
 * add_node - start
 * @head: parameter
 * @str: parameter
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *n;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	n = strdup(str);

	if (n == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = n;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
