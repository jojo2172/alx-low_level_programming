#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the all elements of listint_t list.
 * @h: node param
 * Return: size
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

