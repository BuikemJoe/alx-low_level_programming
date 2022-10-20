#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *hasht)
{
	hash_table_t *head = hasht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < hasht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = hasht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
