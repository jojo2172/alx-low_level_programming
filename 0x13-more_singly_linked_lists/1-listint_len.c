#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print the list length.
 * @h: node param
 * Return: size
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
