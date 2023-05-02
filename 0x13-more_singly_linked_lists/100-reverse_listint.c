#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer
 *
 * Return: a pointer to the first node of the reversed link
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev;
	listint_t *l;

	rev = NULL;
	l = NULL;
	while (*head != NULL)
	{
		l = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = l;
	}
	*head = rev;
	return (*head);
}
