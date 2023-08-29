#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the original linked list
 * @n: data to insert in that new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start;

	start = malloc(sizeof(listint_t));
	if (!start)
		return (NULL);

	start->n = n;
	start->next = *head;
	*head = start;

	return (start);
}
