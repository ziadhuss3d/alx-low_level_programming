#include "lists.h"

/**
 * free_listint - listint_t free
 * @head: head list pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *extra;

	while (head)
	{
		extra = head;
		head = head->next;
		free(extra);
	}
}
