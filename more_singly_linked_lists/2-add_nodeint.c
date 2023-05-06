#include "lists.h"
/**
 * add_nodeint - function that adds new node at the begining of a list
 * @head: head list
 * @n: the number to add
 * Return: the adress of the new element NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

		a = malloc(sizeof(listint_t));
		if (a == NULL)
			return (NULL);

		a->n = n;
		a->next = *head;
		*head = a;
		return (a);
	}
