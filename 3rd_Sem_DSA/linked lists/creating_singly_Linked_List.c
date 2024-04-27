#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 54;
    head->link = NULL;

    // struct node *secondNode = (struct node *)malloc(sizeof(struct node));
    // secondNode->data = 12;
    // secondNode->link = NULL;
    // // Now, linking the first node (head) with the second node.
    // head->link = secondNode;

    // struct node *thirdNode = (struct node *)malloc(sizeof(struct node));
    // thirdNode->data = 32;
    // thirdNode->link = NULL;
    // // Now, linking the first node (head) with the second node.
    // secondNode->link = thirdNode;

    // Instead of making pointer, each one for every new node, we can make just one another
    // pointer, named as current with which we can make memory allocated to the new node
    // and with the help of "multiple arrow" concept, we can allocate the link too.

    // Second Node
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 12;
    current->link = NULL;
    head->link = current;

    printf("The size of the structure 'current' is  %lu\n", sizeof(struct node));
    printf("The size of the integer is  %lu\n", sizeof(int));
    // printf("The size of the link variable is  %d\n", sizeof(struct node));

    printf("address of second node's data = %p, and second node's link = %p \n", (void *)&(current->data), (void *)&(current->link));

    // similarly, for next node, we can use this "current" pointer only instead of making a new one.

    // Third Node
    // struct node *current = (struct node *)malloc(sizeof(struct node));  //Ofcourse no need to redife the pointer "current"
    current->data = 32;
    current->link = NULL;
    head->link->link = current;

    return 0;
}