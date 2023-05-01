#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer
 *
 * @index:index of the node
 *
 * Return: not always 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}
	return (head);
}
