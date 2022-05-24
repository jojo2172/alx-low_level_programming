#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the node at the index.
 * @head: to refer the head.
 * @index: required to get the node.
 * Return: head.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; temp->next != NULL && i < index; ++i)
	{
		temp = temp->next;
	}
	if (i == index)
		return (temp);
	return (NULL);
}
