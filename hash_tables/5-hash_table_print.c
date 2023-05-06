#include "hash_tables.h"
/**
 * hash_table_print - function that retrieves a value associated with a key
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *element;
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
