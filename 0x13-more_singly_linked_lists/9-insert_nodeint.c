#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at a specific index
 * @head: head list pointer
 * @idx: the position where to added the node
 * @n: data to added
 * Return: point into the added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *fetch, *extra;
	unsigned int z;

	fetch = malloc(sizeof(listint_t));
	if (fetch == NULL || head == NULL)
		return (NULL);

	fetch->n = n;

	if (idx == 0)
	{
		fetch->next = *head;
		*head = fetch;
		return (fetch);
	}

	extra = *head;
	for (z = 0; z < idx - 1; z++)
	{
		if (extra == NULL)
		{
			free(fetch);
			return (NULL);
		}
		extra = extra->next;
	}

	fetch->next = extra->next;
	extra->next = fetch;

	return (fetch);
}
