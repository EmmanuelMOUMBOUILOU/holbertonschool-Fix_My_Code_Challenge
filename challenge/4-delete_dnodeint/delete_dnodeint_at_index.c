#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index `index` of a doubly linked list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node to delete (starting at 0).
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    if (!head || !*head)
        return (-1);

    tmp = *head;

    for (i = 0; tmp && i < index; i++)
        tmp = tmp->next;

    if (!tmp)
        return (-1);

    if (tmp->prev)
        tmp->prev->next = tmp->next;
    else
        *head = tmp->next;

    if (tmp->next)
        tmp->next->prev = tmp->prev;

    free(tmp);

    return (1);
}
