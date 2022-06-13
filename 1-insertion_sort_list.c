#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t cn, nn, pvn;

	if (cn > nn)
	{
		aux = cn->next;
		cn->prev = nn->next->prev;
		nn->next->prev = nn->prev;
		cn->next = nn->next;
		nn->next = pvn->next;
		pvn->next = aux;
		aux = nn->prev;
		nn->prev = cn->prev;
		nn->next = pvn->next;
	}

}
