#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Frees a linked list.
  * @head: list_t to be freed.
  *
  * Return: Nothing.
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
