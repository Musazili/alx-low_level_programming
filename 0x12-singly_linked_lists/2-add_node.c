#include "lists.h"
#include <stdlib.h>
/**
 * add_node - add a new node at the beginning of a list
 * @head: the first node
 * @str:  string to store the list
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (len = 0; str[len]; len++)
		;
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
