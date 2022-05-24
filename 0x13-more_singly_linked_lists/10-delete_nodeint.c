#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: a pointer to a pointer to a list of structs of lintint_t.
 * @index: index where deletion should take place.
 * Return: (1) or (-1) if fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *del;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	del = temp->next;
	temp->next = del->next;
	del->next = NULL;
	free(del);
	return (1);
}
