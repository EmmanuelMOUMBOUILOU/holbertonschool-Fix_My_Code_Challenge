#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int p = 0;
	if (*head == NULL)
	{
		return (-1);
	}
	saved_head = *head;
	p = 0;
	while (p < index && saved_head != NULL)
	{
		saved_head = saved_head->next;
		p++;
	}
	if (saved_head == NULL)
		return (-1);
	/* If it's the first node */
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
			tmp->prev = NULL;
	}
	else
	{
		/* Link previous node to next */
		if (saved_head->prev)
			saved_head->prev->next = saved_head->next;
		if (saved_head->next)
			saved_head->next->prev = saved_head->prev;
		free(saved_head);
	}
	return (1);
}
