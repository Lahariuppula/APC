#include "main.h"

int addition(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR)
{
    int carry = 0, res;
    Dlist *temp1 = tail1;
    Dlist *temp2 = tail2;
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1 != NULL && temp2 == NULL)
            res = temp1->data + carry;
        else if (temp1 == NULL && temp2 != NULL)
            res = temp2->data + carry;
        else
            res = temp1->data + temp2->data + carry;
        if (res > 9)
        {
            res = res % 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        insert_at_first(headR, tailR, res);
        if (temp1 != NULL)
            temp1 = temp1->prev;
        if (temp2 != NULL)
            temp2 = temp2->prev;
    }
    if (carry)
        insert_at_first(headR, tailR, carry);

    return SUCCESS;
}