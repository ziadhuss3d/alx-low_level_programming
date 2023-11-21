#include "lists.h"

/**
 * add_nodeint - set nodes to the head of listint_t
 * @head: head list pointer
 * @c: the number to be added
 * Return: new item pointer
 */
listint_t *add_nodeint(listint_t **head, const int c)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);
	fresh->n = c;
	fresh->next = *head;
	*head = fresh;
	return (fresh);
}
