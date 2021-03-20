#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: nodes.
 * Return: elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int j;
	const list_t *nodo = h;

	for (j = 0; nodo != NULL; j++)
	{
		nodo = nodo->next;
	}
	return (j);
}
