#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 *
 * @head: the head of list
 *
 * Return: NULL if (error)
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}