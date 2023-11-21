#include "lists.h"

/**
 * free_listint2 - listint_t free
 * @head: head list pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *extra;

	if (head == NULL)
		return;
	while (*head)
	{
		extra = *head;
		*head = (*head)->next;
		free(extra);
	}
	*head = NULL;
}
