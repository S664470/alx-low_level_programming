#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	while (h != 0)
		h = h->next;
	        count++;
	return (count);
}
