#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion  algorithm
 * @list: the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *tmp, *ins;

	if (!list || !(*list) || !(*list)->next)
		return;
	ins = (*list)->next;
	while (ins)
	{
		node = ins;
		for (tmp = node->prev; tmp; tmp = tmp->prev)
		{
			if (tmp->n > node->n)
			{
				node->prev->next = node->next;
				if (node->next)
					node->next->prev = node->prev;
				node->next = tmp;
				if (tmp->prev)
				{
					tmp->prev->next = node;
					node->prev = tmp->prev;
				}
				else
				{
					*list = node;
					node->prev = NULL;
				}
				tmp->prev = node;
				print_list(*list);
				tmp = node;
			}
		}
		ins = ins->next;
	}
}
