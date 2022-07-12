#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - delete the head of a linkedlist.
 * @head: to refer the head.
 * Return: head.
 */
int pop_listint(listint_t **head)
{
	listint_t *place_holder;
	int num;

	if (*head == NULL)
		return (0);
	place_holder = *head;
	num = place_holder->n;
	*head = place_holder->next;
	free(place_holder);
	return (num);
}
