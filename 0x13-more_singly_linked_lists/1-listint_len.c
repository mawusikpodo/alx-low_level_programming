#include "lists.h"
/**
 * listint_len - check for the number of elements
 * @h: pointer pointing to listint_t
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;

	while (h)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}
