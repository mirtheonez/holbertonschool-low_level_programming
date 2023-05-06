#include "lists.h"
/**
 * dlistint_len - function that return the number of element inlist
 * @h: list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
