#include "lists.h"
#include <string.h>

/**
 * _strsize - the string size
 * @ch: string to get it's size
 *
 * Return: the size of string
 */
int _strsize(const char *ch)
{
	int f = 0;

	while (ch[f])
		f++;
	return (f);
}

/**
 * add_node_end - adds a fresh node into the end of a list_t
 * @head: head list pointer
 * @str: string to calculate
 *
 * Return: string size
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh, *tail;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);
	fresh->str = strdup(str);
	fresh->len = _strsize(str);
	fresh->next = NULL;
	if (*head == NULL)
		*head = fresh;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = fresh;
	}
	return (fresh);
}
