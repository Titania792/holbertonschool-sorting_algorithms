#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cn = NULL, *nn = NULL;

	if (!(*list) || list == NULL || (*list)->next == NULL)
		return;

	cn = (*list)->next;
	while (cn)
	{
		nn = cn->next;
		while (cn->prev && cn->n < cn->prev->n)
		{
			cn->prev->next = cn->next;
			if (cn->next)
				cn->next->prev = cn->prev;
			cn->next = cn->prev;
			if (cn->next)
			{
				cn->prev = cn->next->prev;
				cn->next->prev = cn;
			}
			if (cn->prev)
				cn->prev->next = cn;
			else
				(*list) = cn;
			print_list(*list);
		}
		cn = nn;
	}
}
