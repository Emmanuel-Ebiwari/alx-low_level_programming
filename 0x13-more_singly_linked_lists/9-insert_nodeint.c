#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: double pointer
 * @idx: index to add the new node
 * @n: value of node to be added
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	unsigned int count = 1;
	listint_t *pointer = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	while (pointer->next)
	{
		if (count == idx)
		{
			new_node->next = pointer->next;
			pointer->next = new_node;
			break;
		}
		count++;
		pointer = pointer->next;
	}
	return (*head);
}
