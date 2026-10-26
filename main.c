#include "main.h"

int main(int argc,char *argv[])
{
    if(argc != 4)
    {
        printf("Usage: ./a.out <operand1> <operator> <operand2>\n");
            return FAILURE;
    }
    if (argv[2][0] != '+' &&
        argv[2][0] != '-' &&
        argv[2][0] != '*' &&
        argv[2][0] != '/')
    {
        printf("Invalid operator\n");
        return FAILURE;
    }
    Dlist *head1 = NULL,*tail1 = NULL;
    Dlist *head2 = NULL,*tail2 = NULL;
    Dlist *headR = NULL, *tailR = NULL;
    while(argv[1][0] == '0' && argv[1][1] != '\0')
        argv[1]++;
    while(argv[3][0] == '0' && argv[3][1] != '\0')
        argv[3]++;
    create_list(argv[1],&head1,&tail1);
    create_list(argv[3],&head2,&tail2);
    if(argv[2][0] == '+')
    {
        addition(tail1, tail2, &headR, &tailR);
    }
    else if(argv[2][0] == '-')
    {
        int cmp = compare(head1, head2);
        if(cmp == 1 || cmp == 0)
        {
            subtraction(tail1, tail2, &headR, &tailR);
        }
        else
        {
            printf("-");
            subtraction(tail2, tail1, &headR, &tailR);
        }
    }
    else if(argv[2][0] == '*')
    {
        if(compare(head1, head2) < 0)
        {
            multiplication(tail2, tail1, &headR, &tailR);
        }
        else
        {
            multiplication(tail1, tail2, &headR, &tailR);
        }
    }
    else if(argv[2][0] == '/')
    {
        division(tail1, tail2, &headR, &tailR);
    }
    print_list(headR);
    return SUCCESS;
}