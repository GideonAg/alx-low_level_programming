#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>



/**
 * struct listint_s - A typedef struct of listint_s
 * @n: integer type
 * @next: pointer to next node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct listp_s = A typedef struct of listp_s
 * @p: void pointer
 * @next: pointer to next node
 */

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);


#endif
