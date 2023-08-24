#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: original linked list
 * @str: string to add to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	start = malloc(sizeof(list_t));
	if (!start)
		return (NULL);

	start->str = strdup(str);
	start->len = len;
	start->next = NULL;

	if (*head == NULL)
{
	*head = start;
	return (start);
}

	while (temp->next)
	temp = temp->next;

	temp->next = start;

return (start);
}
