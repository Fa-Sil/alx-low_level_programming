#include "lists.h"

/**
 * listint_len - the number of elements in a linked list.
 *
 * @h: head pointer.
 *
 * Return: Number of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
