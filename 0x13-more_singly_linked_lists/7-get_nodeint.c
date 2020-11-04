#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a linked list
 * @head: pointer to a first node of the linked list
 * @index: the index of the searched node (starting at 0)
 *
 * Return: pointer to a searched node, or NULL if the node does't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head && index)
	{
		return (get_nodeint_at_index(head->next, index - 1));
	}
	return (head);
}
