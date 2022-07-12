#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees the list.
 * @head: to refer the head.
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *place_holder;

	while (head)
	{
		place_holder = head;
		head = head->next;
		free(place_holder);
	}
}
