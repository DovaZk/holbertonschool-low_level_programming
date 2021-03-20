#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @str: nodes
 * @head: first node
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int j = 0;
	list_t *new;

	if (!str)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{

	}
	new->str = malloc(sizeof(char) * (j + 1));
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = j;
	new->next = *head;
	*head = new;
	return (new);
}
