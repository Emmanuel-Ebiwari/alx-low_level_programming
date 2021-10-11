#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: double pointer
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int result;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	result = temp->n;
	(*head) = (*head)->next;
	free(temp);

	return (result);
}
