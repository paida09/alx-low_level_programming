#include "lists.h"

/**
 * get_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 *
 * Return: the nth node of a linked list
 * or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	return (temp ? temp : NULL);
}
