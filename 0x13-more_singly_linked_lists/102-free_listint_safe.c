#include "lists.h"

/**
 * free_listp2 - frees a linked list
 *
 * @head: pointer
 *
 * Return: no return
 */

void free_listp2(listp_t **head)
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
 * free_listint_safe - frees a linked list
 *
 * @h: pointer
 *
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *pt, *new, *pp;
	listint_t *curr;

	pt = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = pt;
		pt = new;
		pp = pt;
		while (pp->next != NULL)
		{
			pp = pp->next;
			if (*h == pp->p)
			{
				*h = NULL;
				free_listp2(&pt);
				return (nodes);
			}
		}
		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodes++;
	}
	*h = NULL;
	free_listp2(&pt);
	return (nodes);
}
