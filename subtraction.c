#include "main.h"

int subtraction(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR)
{
    int borrow = 0, res;
    Dlist *temp1 = tail1;
    Dlist *temp2 = tail2;
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1 != NULL && temp2 == NULL)
            res = temp1->data - borrow;
        else if (temp1 == NULL && temp2 != NULL)
            res = 0 - temp2->data - borrow;
        else
            res = temp1->data - temp2->data - borrow;
        if (res < 0)
        {
            res = res + 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        insert_at_first(headR, tailR, res);
        if (temp1 != NULL)
            temp1 = temp1->prev;
        if (temp2 != NULL)
            temp2 = temp2->prev;
    }
    return SUCCESS;
}