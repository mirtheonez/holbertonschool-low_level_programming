#include "hash_tables.h"
/**
 * shash_table_create - function that create a hash table
 * @size: size table
 * Return: NULL or pointer to newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);
	if (ht == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}

/**
 *shash_table_set - functon that adds ana element to the hash table
 * @ht: table
 * @key: key
 * @value: value
 * Return: 1 if it successed 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *element = NULL, *new = NULL;

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

/**
 * shash_table_get - functon that retrieves a value associated with a key
 * @ht: table
 * @key: key
 * Return: value assocoated NULL if the key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *element = NULL;

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

/**
 * shash_table_print - function that retrieves a value associated with a key
 * @ht: table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *element;
	char *sep;

	if (ht == NULL)
		return;

	putchar('{');
	sep = "";
	for (index = 0; index < (ht->size); index++)
	{
		element = ht->array[index];
		while (element)
		{
			printf("%s'%s': '%s'", sep,  element->key, element->value);
			sep = ", ";
			element = element->next;

		}
	}
	putchar('}');
	putchar('\n');

}
/**
 * shash_table_print_rev - function that retrieves a value associated with a key
 * @ht: table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *element;
	char *sep;

	if (ht == NULL)
		return;

	putchar('{');
	sep = "";
	for (index = 0; index < (ht->size); index++)
	{
		element = ht->array[index];
		while (element)
		{
			printf("%s'%s': '%s'", sep,  element->key, element->value);
			sep = ", ";
			element = element->sprev;

		}
	}
	putchar('}');
	putchar('\n');

}
/**
 * shash_table_delete - function that deletes a hash table
 * @ht: table
 */


void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *element;

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
