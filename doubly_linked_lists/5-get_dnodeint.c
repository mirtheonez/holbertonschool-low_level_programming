#include "lists.h"
/**
 * get_dnodeint_at_index - function that return the nth node of a list
 * @head: list
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (index != 0)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		index--;
	}
	return (head);
}
