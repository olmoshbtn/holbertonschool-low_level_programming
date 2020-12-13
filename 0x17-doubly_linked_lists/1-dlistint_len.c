#include "lists.h"

/**
 * dlistint_len - number of elements in a linked dlistint_t list
 * @h: head pointer to the double linked list
 *
 * Returns: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;

	for ( ; h; h = h->next)
	{
		++elem;
	}
	return (elem);
}
