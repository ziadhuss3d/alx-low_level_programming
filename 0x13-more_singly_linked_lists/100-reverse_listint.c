#include "lists.h"

/**
 * reverse_listint - listint_t reverser
 * @head: the pointer of pointer at head list
 * Return: get position of the first list item
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *left, *right;

	if (head == NULL || *head == NULL)
		return (NULL);

	left = NULL;
	while (*head)
	{
		right = (*head)->next;
		(*head)->next = left;
		left = *head;
		*head = right;
	}
	*head = left;

	return (*head);
}
