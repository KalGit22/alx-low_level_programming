#include "lists.h"

/**
 * list_len - Finds the number of elements of list
 * @h: The linked list_t list.
 * @elements: a counter var for size_t (nodes)
 * Return: The number of elements in h.
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
