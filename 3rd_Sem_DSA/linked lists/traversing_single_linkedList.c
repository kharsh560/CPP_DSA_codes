#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int countOfNodes(struct node *givenPointer)
{
    int count = 0;
    if (givenPointer == NULL)
    {
        printf("The linked List is empty\n");
    }
    struct node *ptr = NULL;
    ptr = givenPointer;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    return count;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 54;
    head->link = NULL;

    // Second Node
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 12;
    current->link = NULL;
    head->link = current;

    // Third Node
    // struct node *current = (struct node *)malloc(sizeof(struct node));  //Ofcourse no need to redife the pointer "current"
    current->data = 32;
    current->link = NULL;
    head->link->link = current;

    printf("the number of nodes in this linkedlist is %d \n", countOfNodes(head));

    return 0;
}