#include "main.h"

int compare(Dlist *head1, Dlist *head2)
{
    int list1 = 0, list2 = 0;

    Dlist *temp1 = head1;
    Dlist *temp2 = head2;
    while(temp1)
    {
        list1++;
        temp1 = temp1->next;
    }
    while(temp2)
    {
        list2++;
        temp2 = temp2->next;
    }
    if(list1 > list2)
        return 1;
    else if(list1 < list2)
        return -1;
    while(head1 && head2)
    {
        if(head1->data > head2->data)
            return 1;
        else if(head1->data < head2->data)
            return -1;

        head1 = head1->next;
        head2 = head2->next;
    }
    return 0;
}