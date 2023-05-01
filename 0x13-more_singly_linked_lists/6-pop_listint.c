#include "lists.h"

/**
 * pop_listint - deletes the headnote of a linked list
 *
 * @head: pointer
 *
 * Return: not always 0
 */

int pop_listint(listint_t **head)
{
	int hn;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);
	curr = *head;
	hn = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (hn);
}
