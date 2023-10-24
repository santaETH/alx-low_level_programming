#include "lists.h"

/**
 * add_nodeint - add a new nod at the first line of the listint_t list.
 * @head: A Poiter to the address of the head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: The address the new function or NULL if it it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}

