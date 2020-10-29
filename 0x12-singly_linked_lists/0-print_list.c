#include "lists.h"

/**
 * print_list - print all the elements of a list
 * @h: linked list
 *
 * Return: numbers of the nodes. If str is NULL, print [0] (nll)
 */
size_t print_list(const list_t *h)
{
	if (h)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		return (print_list(h->next) + 1);
	}
	return (0);
}
