#include "lists.h"
/**
 * sum_listint - function that return the sum of all the data(n)
 * @head: list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
