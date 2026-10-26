#include "main.h"

int division(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR)
{
    int count = 0;
    Dlist *head1 = tail1;
    Dlist *head2 = tail2;
    while (head1->prev)
        head1 = head1->prev;
    while (head2->prev)
        head2 = head2->prev;

    if (head2->data == 0 && head2->next == NULL)
    {
        printf("Invalid input\n");
        return FAILURE;
    }
    while(1)
    {
        if (compare(head1, head2) < 0)
        {
            break;
        }
        Dlist *temp_head = NULL;
        Dlist *temp_tail = NULL;
        subtraction(tail1, tail2, &temp_head, &temp_tail);
        delete_list(&head1, &tail1);
        head1 = temp_head;
        tail1 = temp_tail;
        while (head1->data == 0 && head1->next != NULL)
        {
            Dlist *temp = head1;
            head1 = head1->next;
            head1->prev = NULL;
            free(temp);
        }
        count++;
    }

    if (count == 0)
    {
        insert_at_first(headR, tailR, 0);
    }
    else
    {
        while (count > 0)
        {
            insert_at_first(headR, tailR, count % 10);
            count /= 10;
        }
    }
    return SUCCESS;  
}