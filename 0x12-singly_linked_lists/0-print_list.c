#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the element of list_t list
 *
 * @h: pointer
 *
 * return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%d] %s\n", h->len , h->str);
		h = h->next;
		i++;
	}
	return (i);
}
