#include <stdlib.h>
#include "lists.h"

/**
 * list_len - brings back the number of elements within a linked list
 * @h: pointer to the list_t list
 *
 * Return: Elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
