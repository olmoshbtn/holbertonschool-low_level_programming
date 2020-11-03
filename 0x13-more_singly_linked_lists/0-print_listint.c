#include "lists.h"

/**
 * print_listint - print all elements of a list.
 * @h: linked list
 *
 * Return: number of the nodes.
 */
size_t print_listint(const listint_t *h)
{
	if (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		return (print_listint(h->next) + 1);
	}
	return (0);
}
