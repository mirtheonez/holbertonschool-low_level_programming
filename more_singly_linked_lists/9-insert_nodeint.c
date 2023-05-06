#include "lists.h"
/**
 * insert_nodeint_at_index - function that adds new node at the end of a list
 * @head: head list
 * @n: the number to add
 * @idx:  idx
 * Return: the adress of the new element NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node;
	unsigned int i = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			node = *head;
			while (node)
			{
				if (i == idx)
				{
					new->next = node->next;
					node->next = new;
					return (new);
				}
				node = node->next;
				i++;
			}
				if (idx > i)
					return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);

}
