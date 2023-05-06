#include "lists.h"
/**
 * add_node_end - function that adds new node at the end of a list
 * @head: head list
 * @str: the string to add
 * Return: the adress of the new element NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *new;

	if (str != NULL)
	{
	new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = strlen(str);
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
	}
	return (NULL);
}

