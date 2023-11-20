#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * @list: Double pointer to the head of the linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *swap_node, *next_swap;

	/*Check if the input list is empty*/
	if (list == NULL || *list == NULL)
		return;
/*sets swap_node to point to the second node in the list*/
	swap_node = (*list)->next;
/*starts a loop that will continue as long as swap_node is not NULL*/
	while (swap_node != NULL)
	{
/*sets next_swap to point to the node after swap_node */
		next_swap = swap_node->next;
		while (swap_node->prev != NULL && swap_node->prev->n > swap_node->n)
		{
	/*removes swap_node from its current position in the list*/
			swap_node->prev->next = swap_node->next;

/*updates the prev pointer of the node after swap_node*/
			if (swap_node->next != NULL)
				swap_node->next->prev = swap_node->prev;

			swap_node->next = swap_node->prev;
			swap_node->prev = swap_node->next->prev;
			swap_node->next->prev = swap_node;

	/*checks if swap_node is now at the beginning of the lis*/
			if (swap_node->prev == NULL)
				*list = swap_node;
			else
				swap_node->prev->next = swap_node;

			print_list(*list);
		}
		swap_node = next_swap;
	}
}
