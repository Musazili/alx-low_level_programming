#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: listint to be free
 */

void free_listint(listint_t *head)
{
	listint_t n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
