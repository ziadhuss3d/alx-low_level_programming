#include "lists.h"

/**
 * sum_listint - get sum of all the data (n) of listint_t
 * @head: head list pointer
 * Return: sum of all the data
 */
int sum_listint(listint_t *head)
{
	int total;

	for (total = 0; head; head = head->next)
		total += head->n;

	return (total);
}
