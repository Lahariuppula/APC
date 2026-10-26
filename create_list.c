#include "main.h"

int create_list(char *str, Dlist **head, Dlist **tail)
{
    int i=0;
    while(str[i]!='\0')
    {
        Dlist * new = malloc(sizeof(Dlist));
        if(new == NULL)
            return FAILURE;
        new->data = str[i] - '0';
        new->next = NULL;
        new->prev = NULL;

        if(*head == NULL)
        {
            *head=*tail=new;
        }
        else
        {
            (*tail)->next=new;
            new->prev=*tail;
            *tail = new;
        }
    i++;
    }
    return SUCCESS;
}