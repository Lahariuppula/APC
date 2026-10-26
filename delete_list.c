#include "main.h"
int delete_list(Dlist **head, Dlist **tail)
{
    Dlist *temp = *head;
    while (temp != NULL)
    {
        Dlist *next = temp->next;
        free(temp);
        temp = next;
    }
    *head = NULL;
    *tail = NULL;
    return SUCCESS;
}