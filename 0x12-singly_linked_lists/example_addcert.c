#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    char *name;
    int age;
    struct node *link;
}node;

node add_node_beg(node **h, char *data, int data2);
void add_certpos(node **h, char *data1, int data2, int pos);

/**
* add_node-beg -> Add node at the end of a list
* @h: head pointer to the first node of the list
* Return: Nothing
*/

node add_node_beg(node **h, char *data, int data2)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->name = data;
    temp->age = data2;
    temp->link = NULL;
    

    if (*h == NULL)
    {
         *h = temp;
    }
    else
    {
        temp->link = *h;
	*h = temp;
    }
    return (*temp);
}


void add_certpos(node **h, char *data1, int data2, int pos)
{
	node *ptr = *h;
	node *newPtr;

	newPtr = malloc(sizeof(node));
	newPtr->name = strdup(data1);
	newPtr->age = data2;
	newPtr->link = NULL;

	if (pos == 1)
	{
		newPtr->link = *h;
		*h = newPtr;
		return;
	}
	int count = 1;
	while (ptr != NULL && count < pos != 1)
	{
		ptr = ptr->link;
		count++;
	}
	newPtr->link = ptr->link;
	ptr->link = newPtr;
}

int main(int argc, char *argv[]){

    node *head = NULL;

    add_node_beg(&head, "Ayo", 30);
    add_node_beg(&head, "Seun", 31);
    add_node_beg(&head, "Joshua", 45);
    add_node_beg(&head, "Joshua3", 55);
    add_certpos(&head, "Nwafor", 30, 3);
    add_certpos(&head, "Ugochukwu", 30, 1);

        if (argc < 3 || (argc - 1) % 2 != 0) {
        printf("Usage: %s <name1> <age1> [<name2> <age2> ...]\n", argv[0]);
        return 1;
    }
    
    //Add the list
    for (int i = 1; i < argc; i += 2)
    {
      add_node_beg(&head, argv[i], atoi(argv[i + 1]));
    }
    
// Print out
    node *current = head;
    while (current != NULL)
    {
        printf("Name: %s\n Age: %d\n", current->name, current-> age);
        current = current->link;
    }
    return (0);
}
