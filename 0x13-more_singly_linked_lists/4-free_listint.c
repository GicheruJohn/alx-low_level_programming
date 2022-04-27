#include "lists.h"

/**
 * free_listint - frees a listint_int list
 * @head: head of liked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
