#include "lists.h"
/**
 *  * list_len - returns then number of elements in a list.
 *   * @h: pointer
 *    * Return: not always 0
 */

size_t list_len(const list_t *h)
{
		size_t number_of_nodes;

			number_of_nodes = 0;
				while (h != NULL)
				{					h = h->next;
											number_of_nodes++;
												}
					return (number_of_nodes);
}
