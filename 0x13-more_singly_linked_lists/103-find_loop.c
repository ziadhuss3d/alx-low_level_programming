#include "lists.h"

/**
 * find_listint_loop - get loop from linked list
 * @head: head list pointer
 * Return: position of the loop begin
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point1 = head, *point2 = head;

	while (point2 != NULL)
	{
		point1 = point1->next;
		point2 = point2->next->next;
		if (point1 == point2)
		{
			point1 = head;
			while (point1 != point2)
			{
				point1 = point1->next;
				point2 = point2->next;
			}
			return (point1);
		}
	}
	return (NULL);
}
