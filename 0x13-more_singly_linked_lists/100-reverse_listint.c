#include "lists.h"
/**
 * *reverse_listint - reverses a listint_t linked list
 *
 * @head: double pointer
 *
 * Return: first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
