#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in a linked list
 *
 * @head: pointer
 *
 * Return: not always 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
