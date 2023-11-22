#include "sort.h"

/**
 * insertion_sort_list - Function sorts a doubly linked list of integers
 * @list: Doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (*list == NULL || (*list)->next == NULL)
			return;

	current = (*list)->next;

	while (current != NULL)
	{
	}
}
