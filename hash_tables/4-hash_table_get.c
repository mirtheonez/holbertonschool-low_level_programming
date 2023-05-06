#include "hash_tables.h"
/**
 * hash_table_get - functon that retrieves a value associated with a key
 * @ht: table
 * @key: key
 * Return: value assocoated NULL if the key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	if (element == NULL)
	{
		return (NULL);
	}

	while (strcmp(key, element->key) != 0)
		element = element->next;

	return (element->value);

}
