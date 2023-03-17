#include "lists.h"
/*
 * File: Dlistin_len
 * Auth: Shahinda Altayeeb
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
