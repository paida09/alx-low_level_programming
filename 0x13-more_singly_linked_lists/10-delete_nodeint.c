#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: the index of the node that should be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *new = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		count++;
	}


	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}
