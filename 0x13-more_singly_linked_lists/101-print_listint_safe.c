#include "lists.h"

/**
 * free_listp - frees a linked list
 *
 * @head: pointer
 *
 * @Return: no return
 */

void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 *
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *pt, *new, *pp;

	pt = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = pt;
		pt = new;
		pp = pt;
		while (pp->next != NULL)
		{
			pp = pp->next;
			if (head == pp->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&pt);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_listp(&pt);
	return (nodes);
}
