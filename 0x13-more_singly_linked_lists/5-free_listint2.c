#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 *
 * @head: double pointer
 */
void free_listint2(listint_t **head)
{
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}

	*head = NULL;
}
