#include "lists.h"

/**
 * sum_listint - ...
 * @head: ...
 *
 * Return: ...
 */
int sum_listint(listint_t *head)
{
	int amnt = 0;
	listint_t *temp = head;

	while (temp)
	{
		amnt += temp->n;
		temp = temp->next;
	}

	return (amnt);
}
