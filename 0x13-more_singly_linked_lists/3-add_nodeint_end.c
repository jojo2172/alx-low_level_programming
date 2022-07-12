#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add node at the end of the list.
 * @head: to store and refer the head node
 * @n: length of the new node.
 * Return: size
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *new_node;
	struct listint_s *last = *head;

	new_node = malloc(sizeof(struct listint_s));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
