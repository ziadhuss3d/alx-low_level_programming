#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head list pointer
 * @index: node index
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int z;

	for (z = 0; z < index && head; z++)
		head = head->next;

	return (head);
}
