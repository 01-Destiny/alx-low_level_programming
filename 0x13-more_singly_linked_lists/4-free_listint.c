#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: pointer
 *
 * Return: not always 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
