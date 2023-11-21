#include "lists.h"

/**
 * pop_listint - drop node head for listint_t
 * @head: head list pointer
 * Return: head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *extra;
	int pop;

	if (*head == NULL)
		return (0);
	extra = *head;
	pop = extra->n;
	*head = (*head)->next;
	free(extra);
	return (pop);
}
