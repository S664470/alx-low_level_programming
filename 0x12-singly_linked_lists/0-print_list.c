#include "list.h"
#include <stdio.h>

/**
 * print_list function that prints all element of list_t.
 *
 * @h: list to print
 * File: 0-print_list.c
 * Auther: shahenda altayeb
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while(h !=NULL)
	{
		if(h->str == NULL)
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

	return count;
}
