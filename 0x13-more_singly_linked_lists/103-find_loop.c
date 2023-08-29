#include "lists.h"

/**
 * find_listint_loop - ...
 * @head: ...
 *
 * Return: ...
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pin = head;
	listint_t *new = head;

	if (!head)
		return (NULL);

	while (pin && new && new->next)
	{
		new = new->next->next;
		pin = pin->next;
		if (new == pin)
		{
			pin = head;
			while (pin != new)
			{
				pin = pin->next;
				new = new->next;
			}
			return (new);
		}
	}

	return (NULL);
}
