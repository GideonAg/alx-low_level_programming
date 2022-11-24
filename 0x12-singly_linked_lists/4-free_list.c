#include "lists.h"

/**
 * free_list - frees allocated memory space
 * @head: pointer to allocated memory space
 * Return: void
 */

void free_list(list_t *head)
{
	free(head);
}
