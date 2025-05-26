#include <stdio.h>
#include <stdlib.h>

struct first* createNode(struct first* head, int content);
struct first* addBeg(struct first* head, int content);
struct first* addEnd(struct first* head, int content);
struct first* addBet(struct first* head, int content, int pos);

struct first{
    struct first* prev;
    int data;
    struct first* next;
};

int main(){
    struct first* head = NULL;
    head = createNode(head, 10);
    head = addBeg(head, 15);
    head = addEnd(head, 20);
    head = addBet(head, 50, 2);

    printf("the first data is %d\n", head->data);

    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
    free(head);

    return 0;
}

struct first* createNode(struct first* head, int content){
    struct first *new = malloc(sizeof(struct first));
    new->prev = NULL;
    new->data = content;
    new->next = NULL;

    head = new;

    return head;
}

struct first* addBeg(struct first* head, int content)
{
    struct first *new1 = malloc(sizeof(struct first));
    new1->prev = NULL;
    new1->data = content;
    new1->next = NULL;
    new1->next = head;
    head->prev = new1;
    head = new1;

    return head;
} 

struct first* addEnd(struct first* head, int content)
{
    struct first *tp = createNode(head, content);

    struct first *tp1 = head;
    while(tp1->next != NULL)
        tp1 = tp1->next;
    

    tp1->next = tp;
    tp->prev = tp;

    return head;
} 

struct first* addBet(struct first* head, int content, int pos)
{
    struct first *tp2 = NULL;
    struct first *tp = createNode(tp, content);

    struct first *tp1;
    while(pos != 1){
        tp1 = tp1->next;
        pos--;
    }

    if(tp1->next == NULL){
        tp1->next = tp;
        tp->prev = tp1;
    }
    else{
        tp2 = tp1->next;

        tp1->next = tp;
        tp2->prev = tp;

        tp->prev = tp1;
        tp->next = tp2;
    }
        return head;


} 