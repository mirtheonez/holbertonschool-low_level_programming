#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: head
 * @index: index
 * Return: head's node's data(n)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = *head, *a;
	unsigned int i  = 1;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);

	}
	a = *head;

	while (a)
	{
		if (i == index)
		{
			new = a->next;
			a->next = new->next;
			free(new);
			return (1);
		}
		a = a->next;
		i++;
	}
	return (-1);
}
