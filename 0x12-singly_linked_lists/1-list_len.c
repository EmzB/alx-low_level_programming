#include "lists.h"
/**
 * list_len - returns no. of elements in a list.
 * @h: singly linked list.
 * returns: no. of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
