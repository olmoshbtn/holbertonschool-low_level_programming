#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to a hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char ctr_flag = 0; /* 0 while no data has been printed yet */

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (ctr_flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			ctr_flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
