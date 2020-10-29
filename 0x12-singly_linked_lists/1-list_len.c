#include "lists.h"

/**
 * list_len - return the numbers of elements in a linked list
 * @h: pointer to address of the first node in a linked list
 *
 * Return: length of the list
 */

size_t list_len(const list_t *h)
{
	if (h)
	{
		if (h->str)
		{
			return (list_len(h->next) + 1);
		}
	}
	return (0);
}
