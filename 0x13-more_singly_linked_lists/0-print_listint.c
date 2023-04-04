#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in the list
 * @h: pointer to listint structure
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			number_of_nodes++;
		}
		return (number_of_nodes);
	}
	return (0);
}
