#include "hash_tables.h"
/**
 * key_index - function taht gives the index of a key
 * @key:  key
 * @size: size array
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);

}
