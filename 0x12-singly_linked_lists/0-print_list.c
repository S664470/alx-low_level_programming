#include "lists.h"
#include <stdio.h>

/**
 * Auther: shahenda altayeb
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (null)\n");
		}

		else
		{
			printf("[%ul] %s\n", h->len, h->str);
		}

		h = h->next;

		count++;

	}

	return (count);
}
