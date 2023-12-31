#include "lists.h"

/**
 * sum_listint - sum of all data of a list.
 * @head: pointer to first node
 *
 * Return: sum all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
