#include "lists.h"
/**
 * add_node - adds a new node to list
 * of a list_t list.
 * @head: first element in the list.
 * @str: string to be added in the list.
 * returns: address of head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
