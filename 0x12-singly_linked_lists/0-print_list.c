#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: nodes.
 * Return: elements.
 */
size_t print_list(const list_t *h)
{
	int j;
	const list_t *nodo = h;

	for (j = 0; nodo != NULL; j++)
	{
		if (nodo->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", nodo->len, nodo->str);
		}
		nodo = nodo->next;
	}
	return (j);
}
