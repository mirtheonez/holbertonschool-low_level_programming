#include "lists.h"
/**
 * print_listint - function that print all the elements of a list
 * @h: list
 * Return: number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
