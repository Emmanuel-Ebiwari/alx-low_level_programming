#include "lists.h"
#include <stdlib.h>
/**
 *  free_listint - frees a listint_t list
 *
 *  @head: pointer
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
