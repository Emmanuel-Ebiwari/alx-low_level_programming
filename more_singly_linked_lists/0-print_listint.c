#include "lists.h"
#include <stdio.h>
/**
 * print_listint - that prints all the elements of a listint_t list
 *
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%u\n",h->n);
		h= h->next;
		count++;
	}
	return (count);
}
