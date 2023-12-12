#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlisint_t.
 * @head: pointer to head of the list.
 * @index: index of the node to search form 0.
 * Return: nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
