#include "main.h"

void print_list(Dlist *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (head->data == 0 && head->next != NULL)
    {
        head = head->next;
    }
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
    printf("\n");
}