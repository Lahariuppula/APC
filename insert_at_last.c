#include "main.h"

int insert_at_last(Dlist **head, Dlist **tail, int data)
{
    Dlist *new = malloc(sizeof(Dlist));
    if (!new)
        return FAILURE;
    new->data = data;
    new->next = NULL;
    new->prev = *tail;
    if (*head == NULL)
    {
        *head = *tail = new;
    }
    else
    {
        (*tail)->next = new;
        *tail = new;
    }
    return SUCCESS;
}