#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *element;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			element = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = element;
		}
		free(ht->array[index]);
	}
	free(ht->array);
	free(ht);
}
