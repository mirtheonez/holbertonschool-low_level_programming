#include "lists.h"
/**
 * add_node - function that adds new node at the begining of a list
 * @head: head list
 * @str: the string to add
 * Return: the adress of the new element NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;

	if (head != NULL && str != NULL)
	{
		a = malloc(sizeof(list_t));
		if (a == NULL)
			return (NULL);

		a->str = strdup(str);
		a->len = strlen(str);
		a->next = *head;
		*head = a;
		return (a);
	}
	return (NULL);
}
