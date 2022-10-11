#include "sort.h"

void insert(listint_t **list, listint_t *current, listint_t *new_node)
{
	listint_t *previous;

	if (current->prev != NULL && current->n > new_node->n)
	{
		previous = current->prev;
		previous->next = new_node;
		current->prev = new_node;
		if (new_node->next != NULL)
			current->next = new_node->next;
		new_node->next = current;
		new_node->prev = previous;
		print_list(*list);
		insert(list, previous, new_node);
	}
	else if (current->prev == NULL)
	{
		new_node->next = current;
		current->prev = new_node;
		*list = new_node;
		print_list(*list);
	}
	/*
	if ((*list)->n > new_node->n)
	{
		new_node->next = *list;
		new_node->next->prev = new_node;
		*list = new_node;
	}
	else
	{
		while (current->next != NULL && current->next->n < new_node->n)
		{
			current = current->next;
			new_node->next = current->next;
			if (current->next !=NULL)
				new_node->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
		}
	}
	*/
}
/*

	if (*list == NULL)
		*list = new_node;
	else if ((*list)->n >= new_node->n)
	{
		new_node->next = *list;
		new_node->next->prev = new_node;
		*list = new_node;
	}
	else
	{
		current = *list;

		while (current->next != NULL && current->next->n < new_node->n)
			current = current->next;

		new_node->next = current->next;

		if (current->next != NULL)
			new_node->next->prev = new_node;
		current->next = new_node;
		new_node->prev = current;
	}
}
*/

/**
 * insertion_sort_list - Implementation of the insertion sort algorithm
 * @list: pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *next;

	while (current != NULL && current->next != NULL)
	{
		next = current->next;
		printf("%d-- cur %d\n", next->n, current->n);
		if (next->n < current->n)
		{
			current->next = next->next;
			if (next->next)
				next->next->prev = current;
			next->next = next->prev =  NULL;
			insert(list, current, next);
		}
		else
			current = current->next;
		print_list(*list);
	}
}
