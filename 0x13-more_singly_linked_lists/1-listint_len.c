#include "lists.h"

/**
 * listint_len - returns the number of elements in a lined list
 * @h: head of a linked list
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
