#include "lists.h"
/**
 * pop_listint - deletes the head node and returns the head node’s data (n)
 * @head: a pointer to the first node of the list
 * Return: if empty return 0 otherwise head node data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int i;

	if (*head == NULL)
		return (0);
	t = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(t);

	return (i);
}
