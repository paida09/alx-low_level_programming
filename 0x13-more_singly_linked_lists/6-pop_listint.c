#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: ...
 *
 * Return: the head node’s data (n)
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
