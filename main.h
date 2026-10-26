#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct node
{
	int data;
	struct node *prev;
	struct node *next;
}Dlist;

int create_list(char *str,Dlist **head,Dlist **tail);
void print_list(Dlist *head);
int insert_at_first(Dlist **head, Dlist **tail, int data);
int addition(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR);
int subtraction(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR);
int multiplication(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR);
int division(Dlist *tail1, Dlist *tail2, Dlist **headR, Dlist **tailR);
int compare(Dlist *head1, Dlist *head2);
int delete_list(Dlist **head, Dlist **tail);
int insert_at_last(Dlist **head, Dlist **tail, int data);

#endif