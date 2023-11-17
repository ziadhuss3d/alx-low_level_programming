#include "lists.h"

/**
 * free_list - free the list_t
 * @head: point to first item list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *trans;

	while (head)
	{
		trans = head;
		head = head->next;
		free(trans->str);
		free(trans);
	}
}
