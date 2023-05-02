#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer
 *
 * Return: the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop;
	listint_t *prev;

	loop = head;
	prev = head;
	while (head && loop && loop->next)
	{
		head = head->next;
		loop = loop->next->next;
		if (head == loop)
		{
			head = prev;
			prev = loop;
			while (1)
			{
				loop = prev;
				while (loop->next != head && loop->next != prev)
				{
					loop = loop->next;
				}
				if (loop->next == head)
					break;
				head = head->next;
			}
			return (loop->next);
		}
	}
	return (NULL);
}
