#include "lists.h"
/**
 * free_listint - function that free a list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (head)
	{
		a = head->next;

		free(head);
		head = a;

	}

}
