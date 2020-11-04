#include "lists.h"

/**
 * listint_len - count number of elements in a list.
 * @h: linked list
 *
 * Return: number of the nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		if (h->n)
			return (listint_len(h->next) + 1);
	}
	return (0);
}
