#include "main.h"

int multiplication(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR)
{
    int carry=0,res,shift = 0;
    Dlist *temp1, *temp2 = tail2;
    Dlist *res1_head = NULL, *res1_tail = NULL;
    Dlist *res2_head = NULL, *res2_tail = NULL;
    Dlist *res_head = NULL, *res_tail = NULL;

    while (temp2 != NULL)
    {
        temp1 = tail1;
        carry = 0;
        res2_head = res2_tail = NULL;
        while(temp1 != NULL)
        {
            res = temp1->data * temp2->data + carry;
            carry = res / 10;
            res = res % 10;
            insert_at_first(&res2_head, &res2_tail, res);
            temp1 = temp1 -> prev;
        }
        if (carry)
        {
            insert_at_first(&res2_head, &res2_tail, carry);
        }
        for (int i = 0; i < shift; i++)
        {
            insert_at_last(&res2_head, &res2_tail, 0);
        }
        if (res1_head == NULL)
        {
            res1_head = res2_head;
            res1_tail = res2_tail;
        }
        else
        {
            addition(res1_tail, res2_tail, &res_head, &res_tail);
            delete_list(&res1_head, &res1_tail);
            delete_list(&res2_head, &res2_tail);
            
            res1_head = res_head;
            res1_tail = res_tail;

            res_head = NULL;
            res_tail = NULL;
        }
        shift++;
        temp2 = temp2->prev;
    }
    *headR = res1_head;
    *tailR = res1_tail;
    return SUCCESS;   
}