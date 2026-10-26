#include "main.h"

int insert_at_first(Dlist **head, Dlist **tail, int data)
{
    Dlist *new = malloc(sizeof(Dlist));
    if (new == NULL)
        return FAILURE;
    new->data = data;
    new->prev = NULL;
    new->next = *head;
    if (*head == NULL)
    {
        *head = *tail = new;
    }
    else
    {
        (*head)->prev = new;
        *head = new;
    }
    return SUCCESS;
}