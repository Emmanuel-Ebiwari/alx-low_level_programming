#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: double pointer
 * @n: node to be added
 * Return: the address of the new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;

	return (*head);
}
