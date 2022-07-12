#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add node at the begining.
 * @head: to store and refer the head node
 * @n: length of the new node.
 * Return: size
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *new_node;

	new_node = malloc(sizeof(struct listint_s));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	*head = new_node;
	return (new_node);
}
