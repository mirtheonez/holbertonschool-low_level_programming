#include "lists.h"
/**
 * free_list - function that free a list
 * @head: head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head;
		head = head->next;

		free(a->str);
		free(a);

	}
	free(head);

}
