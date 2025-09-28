#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at given index in a doubly linked list
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    tmp = *head;

    /* If deleting the head node */
    if (index == 0)
    {
        *head = tmp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(tmp);
        return (1);
    }

    /* Traverse to the node at position index */
    for (i = 0; tmp != NULL && i < index; i++)
        tmp = tmp->next;

    /* If index is out of range */
    if (tmp == NULL)
        return (-1);

    /* Reconnect the previous node, if any */
    if (tmp->prev != NULL)
        tmp->prev->next = tmp->next;

    /* Reconnect the next node, if any */
    if (tmp->next != NULL)
        tmp->next->prev = tmp->prev;

    free(tmp);
    return (1);
}
