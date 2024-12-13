#include "lists.h"
typedef struct node {
	int n;
	struct node *link;
}node;

node reverse(node *h, int n)
{
	node *ptr1, ptr2;

	/*
	ptr1 = h;
	h->link = NULL;
	ptr1->link = h;
	ptr2 = ptr1;
	ptr1->link = NULL;
	ptr2->link = ptr1;
	*/

	while (h != NULL){
	ptr1 = NULL;
	ptr2 = h->link;

	h->link = ptr1;

	ptr1 = head;
	head = ptr2;
	}
}
