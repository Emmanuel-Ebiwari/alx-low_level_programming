#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a
 * list_t list
 *
 * @head: pointer to a pointer
 * @str: pointer
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t ));
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	if (*head == NULL)
		return (NULL);

	return (*head);
}
