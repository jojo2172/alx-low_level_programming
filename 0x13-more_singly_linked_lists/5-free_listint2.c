#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees the list.
 * @head: to refer the head.
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *place_holder;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			place_holder = *head;
			*head = place_holder->next;
			free(place_holder);
		}
	}
}
