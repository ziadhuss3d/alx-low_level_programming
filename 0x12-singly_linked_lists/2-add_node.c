#include "lists.h"
#include <string.h>

/**
 * _strsize - string size
 * @ch: string to calculate
 *
 * Return: string size
 */
int _strsize(const char *ch)
{
	int count = 0;

	while (ch[count])
		count++;
	return (count);
}

/**
 * add_node - adds node at the start of list_t
 * @head: head list pointer
 * @str: string to duplicate
 *
 * Return: the fresh element pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);
	fresh->str = strdup(str);
	fresh->len = _strsize(str);
	fresh->next = *head;
	*head = fresh;
	return (fresh);
}
