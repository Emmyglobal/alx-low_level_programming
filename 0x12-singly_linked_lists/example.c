#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char *name;
    int age;
    struct node *link;
}node;

void count_num(node *h);



void count_num(node *h)
{
    int count = 0;
    if (h == NULL)
    {
        printf("Linked list is empty");
    }
    node *ptr = NULL;
    ptr = h;
    while (ptr)
    {
        printf("[%s],\t [%d]\n", ptr->name, ptr->age);
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
}
int main(void)
{
    node *head, *current, *current1, *current2;

    head = (node *)malloc(sizeof(node));
    head->name = "John";
    head->age = 22;
    head->link = NULL;

    current = (node *)malloc(sizeof(node));
    current->name = "Doe";
    current->age = 33;
    current->link = NULL;
    head->link = current;

    current = (node *)malloc(sizeof(node));
    current->name = "Louis";
    current->age = 18;
    current->link = NULL;
    head->link->link = current;

    current = (node *)malloc(sizeof(node));
    current->name = "Louis Aiy";
    current->age = 19;
    current->link = NULL;
    head->link->link->link = current;

    current = (node *)malloc(sizeof(node));
    current->name = "Elvera";
    current->age = 16;
    current->link = NULL;
    head->link->link->link->link = current;

    current = (node *)malloc(sizeof(node));
    current->name = "Emma Aiy";
    current->age = 15;
    current->link = NULL;
    head->link->link->link->link->link = current;


    count_num(head);

    return (0);
}
