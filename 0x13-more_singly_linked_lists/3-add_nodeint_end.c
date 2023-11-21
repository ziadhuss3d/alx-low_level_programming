#include "lists.h"

/**
 * add_nodeint_end - set nodes to the end of listint_t
 * @head: head list pointer
 * @n: the number to be added
 * Return: new item pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *final;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = n;
	fresh->next = NULL;
	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}
	final = *head;
	while (final->next)
		final = final->next;
	final->next = fresh;
	return (fresh);
}
