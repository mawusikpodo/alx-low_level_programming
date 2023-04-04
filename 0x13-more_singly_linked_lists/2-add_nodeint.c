#include "lists.h"

/**
 * add_nodeint - adds a new nod at the begining of a list
 * @head: a pointer to listint_t structure
 * @n: an integer data to add into the new node
 * Return: the address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;

	if (!new_node)
	{
		return (NULL);
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
}
