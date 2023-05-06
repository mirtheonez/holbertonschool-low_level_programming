#include "hash_tables.h"
/**
 * hash_table_set - functon that adds ana element to the hash table
 * @ht: table
 * @key: key
 * @value: value
 * Return: 1 if it successed 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL, *new = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	if (element && strcmp(key, element->key) == 0)
	{
		free(element->value);
		element->value = strdup(value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);

}
