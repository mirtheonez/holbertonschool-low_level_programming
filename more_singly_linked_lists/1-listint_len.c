
#include "lists.h"
/**
 * listint_len - function that return the number of elements in linked list
 * @h: list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);

}
