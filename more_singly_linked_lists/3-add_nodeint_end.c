#include "lists.h"
/**
 * add_nodeint_end - function that adds new node at the end of a list
 * @head: head list
 * @n: the number to add
 * Return: the adress of the new element NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a, *new;

	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			a = *head;
			while (a->next)
				a = a->next;
			a->next = new;
			return (a);
		}

	return (NULL);
}
